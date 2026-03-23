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

//Approach one
 Node* sort0s1s2slist(Node* head){
    Node* zeroCount =0;
    Node* oneCount =0;
    Node* twoCount =0;
    
    Node* temp= head;
    while(temp!=NULL){
        if(temp->data==0){
            zeroCount++;
        }else if(temp->data==1){
            oneCount++;
        }else if(temp->data==2){
            twoCount++;
        }
        temp=temp->next;

    }
    temp=head;
    while(temp!=NULL){
        if(zeroCount!=0){
            temp->data=0;
            zeroCount--;
        }else if(oneCount!=0){
            temp->data=1;
            oneCount--;
        }else if(twoCount!=0){
            temp->data=2;
            twoCount--;
        }
        temp=temp->next;
    }
    return head;
 }

 void insertAtTail(Node* &tail,Node* curr){
    tail->next=curr;
    tail=curr;
 }
 //Approach2-> dataa repalcement not allowed
 Node* sortList(Node* head){
    Node* zerohead = new Node(-1);
    Node* zerotail = zerohead;
    Node* onehead = new Node(-1);
    Node* onetail = onehead;
    Node* twohead = new Node(-1);
    Node* twotail = twohead;    

    Node* curr=head;

    while(curr!=NULL){
        int value=curr->data;
        if(value==0){
            insertAtTail(zerotail,curr);
        }else  if(value==1){
            insertAtTail(onetail,curr);
        }else  if(value==2){
            insertAtTail(twotail,curr);
        }
        curr= curr->next;
    }
  
    //merge 3 list
    // list is not empty
    if(onehead->next!=NULL){
        zerotail->next=onehead->next;
    }else{
        // list is empty

        zerotail->next=twohead->next;
    }

    onetail->next=twohead->next;
    twotail->next=NULL;

    //setup head
    head=zerohead->next;
     
    // deletee dummy nodes
    delete zerohead;
    delete onehead;
    delete twohead;

    return head;
 }
int main(){
    //created a new node
    Node * node1=new Node(2);
   // cout<<node1->data<<endl;
   // cout<<node1->next<<endl;

    //head pointed to node1
    Node* head=node1;
    Node* tail=node1;
    print(head);

    InsertAtTail(tail,1);
    print(head);

    InsertAtTail(tail,1);
    print(head);

    InsertAtPosition(head,tail,4,0);
    print(head);

     head = sortList(head);
    cout<<" sorted list: ";
    print(head);
    
}