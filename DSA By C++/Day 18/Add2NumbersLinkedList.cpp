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
void insertAtTail(Node* &head,Node* &tail,int val){
      Node* temp=new Node(val);
    if(head==NULL){
       head=temp;
       tail=temp;
       return;
      }else{
          tail->next=temp;
          tail=temp;
      }
}
Node* add(Node* first,Node* second){
       int carry=0;

       Node* anshead= NULL;
       Node* anstail=NULL;
       //optimisation
        while(first!=NULL || second!=NULL || carry!=0){
            int val1=0;
            if(first!=NULL){
                val1=first->data;
            }

             int val2=0;
            if(second!=NULL){
                val2=second->data;
            }

          int  sum=carry+val1+val2;
          int digit=sum%10;

          //create node and add in answer linked list
         insertAtTail(anshead,anstail,digit);

         carry=sum/10;
         if(first!=NULL)
            first=first->next;
         if(second!=NULL)
            second=second->next;

        }
            return anshead;

     /*  while(first!=NULL && second!=NULL){
         int sum= carry+first->data+second->data;
         int digit=sum%10;
         
         //create node and add in answer linked list
         insertAtTail(anshead,anstail,digit);

         carry=sum/10;
         first=first->next;
         second=second->next;
        }

        while(first!=NULL){
            int sum= carry+ first->data;
            int digit=sum%10;

            insertAtTail(anshead,anstail,digit);
            carry=sum/10;
              first=first->next;
        }

        while(second!=NULL){
            int sum= carry+ second->data;
            int digit=sum%10;

            insertAtTail(anshead,anstail,digit);
            carry=sum/10;
            second=second->next;
        }

        while(carry!=0){
            int sum= carry;
            int digit=sum%10;

            insertAtTail(anshead,anstail,digit);
            carry=sum/10;
        }
        return anshead; */
}
Node* add2NumberInList(Node* first,Node* second){
    //step 1-> reverse input LL
    first=reverse(first);
    second=reverse(second);

    //step2-> add 2 LL

    Node* ans= add(first,second);

    //step3 reverse ans
    ans= reverse(ans);

    return ans;

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
   
   Node* result = add2NumberInList(first, second);

   cout << "Sum is: ";
   print(result);
     
}