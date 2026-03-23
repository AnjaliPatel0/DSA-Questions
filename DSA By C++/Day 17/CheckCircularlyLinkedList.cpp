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
void  insertNode(Node* &tail,int element,int d){
    //empty list
    if(tail==NULL){
        Node* newNode= new Node(d);
        tail=newNode;
        newNode->next=newNode;
    }else{
        //non empty list
        // assuming that the element is present in the list

        Node* curr =tail;

        while(curr->data!= element){
             curr= curr->next;
        }

        // element found curr is representing element wala node
        Node* temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
}

void print(Node* tail){
    Node* temp=tail;

    //empty list
    if(tail==NULL){
        cout<<"list is empty "<<endl;
        return;
    }
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!=temp);
    cout<<endl;
}

bool isCircularList(Node* head){
    //empty list
    if(head==NULL){
        return true;
    }

    Node* temp= head->next;
    while(temp!=NULL && temp!=head){
          temp=temp->next;
    }
    if(temp==head){
        return true;
    }
    return false;
}
int main(){
    Node* tail= NULL;
   insertNode(tail,5,3);
   print(tail);

   insertNode(tail,3,5);
   print(tail);

   insertNode(tail,5,8);
   print(tail);

   insertNode(tail,8,9);
   print(tail);

   insertNode(tail,3,4);
   print(tail);

   insertNode(tail,9,10);
   print(tail);

   insertNode(tail,8,7);
   print(tail);

  if(isCircularList(tail)){
    cout<<"Linked list is circular in nature "<<endl;
  }else{
    cout<<"Linked list is not circular in nature "<<endl;
  }
}