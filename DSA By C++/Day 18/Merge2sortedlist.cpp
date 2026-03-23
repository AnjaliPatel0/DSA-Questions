#include<iostream>
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
Node* solve(Node* first ,Node* second){
   Node* curr1=first;
   Node* next1=curr1->next;
   Node* curr2=second;
   Node* next2=curr2->next;
   while(next1!=NULL && curr2!=NULL){
    if(curr2->data>=curr1->data && curr2->data<=next1->data){
        // add nodes in bettween the first list
        curr1->next=curr2;  
         next2= curr2->next;
         curr2->next=next1;

         //update pointers
         curr1=curr2;
         curr2=next2;
    }else{
        //curr1 and next1 ko age badhaana hai
         curr1=next1;
         next1=next1->next;

         if(next1==NULL){
            curr1->next=curr2;
            return first;
         }
     }
  }
   return first;
}
Node* merge2sortedlist(Node* first ,Node* second){
    if(first==NULL)
       return second;

    if(second==NULL)
       return  first; 
       
    if(first->data<=second->data){
        return solve(first,second);
    }else{
      return  solve(second,first);
    }   
}

int main(){
    // First sorted list: 1 -> 3 -> 5
    Node* first = new Node(1);
    Node* tail1 = first;
    InsertAtTail(tail1, 3);
    InsertAtTail(tail1, 5);

    cout << "First list: ";
    print(first);

    // Second sorted list: 2 -> 4 -> 6
    Node* second = new Node(2);
    Node* tail2 = second;
    InsertAtTail(tail2, 4);
    InsertAtTail(tail2, 6);

    cout << "Second list: ";
    print(second);

    // Merge both
    Node* ans = merge2sortedlist(first, second);

    cout << "Merged list: ";
    print(ans);


   
    
}