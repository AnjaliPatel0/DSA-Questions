#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //Constructor
    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }

    //desturctor
    //memory free
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }

};
//traverse a linked list
void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}
//gives length of linked list
int getlength(Node* head){
    int len=0;
    Node* temp = head;
    while(temp!=NULL){
       len++;
        temp=temp->next;
    }return len;
}
void insertAtHead(Node* &tail,Node* &head,int d){
  // empty list
  if(head==NULL){
    Node* temp= new  Node(d);
    head=temp;
    tail=temp;
  }else{
    Node* temp= new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
   
  }
  
    
}
void insertAtTail(Node* &tail,Node* &head,int d){
   
    if(tail==NULL){
    Node* temp= new  Node(d);
    tail=temp;
    head=temp;
  }else{
    Node* temp= new Node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
  }
}
void insertAtPosition(Node* &tail,Node* &head,int position,int d){
  if(position==1){
    insertAtHead(tail,head,d);
    return;
  }

  Node* temp=head;
  int count=1;
  while(count<position-1){
    temp=temp->next;
    count++;
  }

  if(temp->next==NULL){
    insertAtTail(tail,head,d);
    return;
  }

  Node* nodeToInsert= new Node(d);

  nodeToInsert->next = temp->next;
  temp->next->prev=nodeToInsert;
  temp->next=nodeToInsert;
   nodeToInsert->prev=temp;
}
//delete a node
void deleteNode(int position,Node* &head){
   //delete start node
    if (position==1){
        Node *temp=head;
        temp->next->prev=NULL;
        head=temp->next;
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
     curr->prev=NULL;
     prev->next = curr->next;
     curr->next=NULL;
     delete curr;
    }
}

int main(){
    // Node* node1= new Node(10);
    // Node* head=node1;
    // Node* tail = node1;

    Node* head=NULL;
    Node* tail = NULL;
    print(head);

    //cout<<getlength(head)<<endl;

    insertAtHead(tail,head,20);
    print(head);
   
    insertAtHead(tail,head,30);
    print(head);
   
    insertAtTail(tail,head,40);
    print(head);

    insertAtPosition(tail,head,3,50);
    print(head);
   
    insertAtPosition(tail,head,1,100);
    print(head);

    insertAtPosition(tail,head,5,200);
    print(head);

    deleteNode(6,head);
    print(head);
}