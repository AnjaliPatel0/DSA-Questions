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
//Approach first
bool checkPalindromeInList(vector<int> arr ){
    int n=arr.size();
    int s=0;
    int e=n-1;
    while(s<=e){
        if(arr[s]!=arr[e]){
            return 0;
        }
        s++;
        e--;
    }
    return 1;
}
bool isPalindrome(Node* head){
    vector<int> arr;

    Node* temp= head;
    while(temp!=NULL){
        arr.push_back(temp->data);
        temp=temp->next;
    }
    return checkPalindromeInList(arr);
}
//Approach second
Node* getMid(Node* head){
    Node* slow=head;
    Node* fast=head->next;

    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}
Node* reverse(Node* head){
     Node* curr=head;
     Node* prev=NULL;
     Node* next=NULL;
   
     while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
     }
    return prev;
}
bool Palindrom(Node* head){
    if(head->next==NULL){
        return true;
    }
    //step 1-> find  middle
    Node* middle=getMid(head);

    //step 2-> reverse list affter middle
    Node* temp=middle->next;
    middle->next=reverse(temp);

    //step3 -> compare both halves
    Node* head1=head;
    Node* head2=middle->next;
    while(head2!=NULL){
     if(head1->data!=head2->data){
        return false;
     }
     head1=head1->next;
     head2=head2->next;
    }
    //step4-> repeate step 2
    Node* tem=middle->next;
    middle->next=reverse(temp);

    return true;
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
    if(isPalindrome(head)){
        cout<<"linked list a palindrome "<<endl;
    }else{
        cout<<"linked list is not  a palindrome "<<endl;
    }

   
}