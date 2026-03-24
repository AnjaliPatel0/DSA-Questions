#include<iostream>
#include<unordered_map>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* random;
// Constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
        this->random = NULL;
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
void insertAtTail(Node* &head,Node* &tail,int d ){
    Node* newNode= new Node(d);
    if(head==NULL){
      head=newNode;
      tail=newNode;
      
    }else{
        tail->next=newNode;
        tail=newNode;
    }
}
Node* cloneLinkedlistRandomPointers(Node* head){
  
  
  
  /* Approach 1  t.c->O(n) & s.c->O(n)
    // step1 create a clone list
    Node* clonehead=NULL;
    Node* clonetail=NULL;

    Node* temp= head;
    while(temp!=NULL){
        insertAtTail(clonehead,clonetail,temp->data);
        temp=temp->next;
    }

    //step2 create a map
    unordered_map<Node*,Node*> oldToNewNode;

    Node* originalNode=head;
    Node* cloneNode=clonehead;
    while(originalNode!=NULL && cloneNode!=NULL){
        oldToNewNode[originalNode]=cloneNode;
        originalNode=originalNode->next;
        cloneNode=cloneNode->next;
    }
      originalNode=head;
      cloneNode=clonehead;

      while(originalNode!=NULL){
        cloneNode-> random = oldToNewNode[originalNode->random];
        originalNode=originalNode->next;
        cloneNode=cloneNode->next;
      }
      return clonehead; */



    //Approach 2 optimisation t.c->O(n) & s.c->O(1)  
    // step1 create a clone list
    Node* clonehead=NULL;
    Node* clonetail=NULL;

    Node* temp= head;
    while(temp!=NULL){
        insertAtTail(clonehead,clonetail,temp->data);
        temp=temp->next;
    }

    //step2-> cloneNodes add in between original list
    Node* originalNode=head;
    Node* cloneNode=clonehead;
    while(originalNode!=NULL && cloneNode!=NULL){
        Node* next= originalNode->next;
        originalNode->next= clonehead;
        originalNode=next;

        next= cloneNode->next;
        cloneNode->next= originalNode;
        cloneNode=next;
    }

    //step 3-> random pointer copy
     temp= head;
    while(temp!=NULL){
        if(temp->next!=NULL){
            temp->next->random=temp->random? temp->random->next:temp->random;
        }
        temp=temp->next->next;
    }

    //step 4-> revert changes done in step2
      originalNode=head;
      cloneNode=clonehead;
      while(originalNode!=NULL && cloneNode!=NULL){
        originalNode->next= clonehead->next;
        originalNode=originalNode->next; 


        if(originalNode!=NULL){
            cloneNode->next=originalNode->next;
        }
        cloneNode=clonehead->next;
    }

    //step 5 return ans
    return clonehead;
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

    InsertAtTail(tail,13);
    print(head);

    InsertAtPosition(head,tail,4,22);
    print(head);

    Node* clone = cloneLinkedlistRandomPointers(head);

    cout << "Cloned list: ";
    print(clone);
    
}