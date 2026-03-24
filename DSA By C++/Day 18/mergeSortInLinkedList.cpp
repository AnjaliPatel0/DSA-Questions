#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
// Constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

};   
//Insertion at head
void InsertAtHead(Node* &head,int d){
   // new node create
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}
// Insertion at tail or last node
void InsertAtTail(Node* &tail,int d){
   // new node create
    Node* temp=new Node(d);
    tail->next=temp;
    tail=tail->next;
}
// Insertion at Position
void InsertAtPosition(Node* &head,Node* &tail,int position,int d){
  //insert at starting
    if(position==1){
    InsertAtHead(head,d);
    return;
   }
    // new node create or at position insert
    Node* temp=head;
    int count=1;
    while(count<position-1){
      temp=temp->next;
      count++;
    }

    //isert at last position
    if(temp->next==NULL){
        InsertAtTail(tail,d);
        return;
    }
    //create a node for d
    Node* nodetpInsert = new Node(d);
    nodetpInsert->next =temp->next;
    temp->next=nodetpInsert;
}
void print(Node* &head){
     Node* temp=head;
     while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
     }cout<<endl;
}
Node* findMid(Node* head){
    Node* slow= head;
    Node* fast= head->next;

    while(fast!=NULL && fast->next !=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
Node* merge(Node* left,Node* right){
    if(left==NULL)
      return right;

    if(right==NULL)
      return left;

    Node* ans= new Node(-1);
    Node* temp=ans;  
      
    while(left!=NULL && right !=NULL){
        if(left->data <right->data){
            temp->next=left;
            temp=left;
            left=left->next;
        }else{
            temp->next=right;
            temp=right;
            right=right->next;
        }
    }  
       while(left!=NULL){
        
            temp->next=left;
            temp=left;
            left=left->next;
        }
         while(right!=NULL){
            temp->next=right;
            temp=right;
            right=right->next;
         }
         ans=ans->next;
         return ans;
}
Node* mergeSort(Node* head){
    //base case
    if(head==NULL || head->next==NULL){
        return head;
    }

    //break linked list into 2 halves after finding mid
    Node* mid= findMid(head);

    Node* left=head;
    Node* right= mid->next;
    mid->next=NULL;

    //recursive calls to sort both halves
    left=mergeSort(left);
    right=mergeSort(right);


    //merge both left and right  halves
    Node* result= merge(left,right);
    return result;

}
int main(){
    
    Node* node1 = new Node(1);
    Node* head=node1;
    Node* tail=node1;
    print(head);
    InsertAtTail(tail, 1);
    print(head);
    InsertAtTail(tail, 2);
    print(head);
    InsertAtTail(tail, 0);
     print(head);
    InsertAtTail(tail, 1);
     print(head);
    
    // check palindrome
    Node* mergesort = mergeSort(head);
    cout<<"merge sort is "<<endl;
    print(mergesort);

   
}