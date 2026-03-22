#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void InsertAtHead(Node* &head,int d){
   // new node create
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}
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
Node* reverseLinkedList(Node *head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* prev= NULL;
    Node* curr= head;
    Node* forward=NULL;
    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
         prev = curr;
        curr=forward;
    }
    return prev;
}
// reverse using recursion
void reverse(Node* &head, Node* curr, Node*prev){
  if(curr==NULL){
    head=prev;
    return;
  }

  Node* forward = curr->next;
  reverse(head,forward,curr);
  curr->next=prev;
}

Node* reverseRecursion(Node *head){
       Node* curr= head;
       Node* prev= NULL;
       reverse(head,curr,prev);
       return head;
}
int main(){
    Node * node1=new Node(10);
    //head pointed to node1
    Node* head=node1;
    Node* tail=node1;
    print(head);

    InsertAtTail(tail,12);
    print(head);

    InsertAtTail(tail,15);
    print(head);

    InsertAtPosition(head,tail,4,22);
    print(head);

    head= reverseRecursion(head);
    cout<<"Reverse Linked list ";
    print(head);
}