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

    //desturctor
    //memory free
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
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

void deleteNode(int position,Node* &head){
   //delete start node
    if (position==1){
        Node *temp=head;
          head=head->next;
          temp->next=NULL;
          delete temp;
    }else{
     //delete middle or last node
     Node* curr=head;
     Node* prev =NULL;

     int count=1;
     while(count<position){
        prev=curr;
        curr=curr->next;
        count++;
     }
     prev->next = curr->next;
     curr->next=NULL;
     delete curr;
    }
}
int main(){
    //created a new node
    Node * node1=new Node(10);
   // cout<<node1->data<<endl;
   // cout<<node1->next<<endl;

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

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    deleteNode(4,head);
    print(head);
}