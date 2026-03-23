#include<iostream>
#include<map>
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

bool detectLoop(Node* head){
    if(head==NULL){
        return false;
    }

    map<Node*,  bool> visited;
   
    Node* temp = head;
    while(temp!=NULL){
        //cycle is present
        if(visited[temp]==true){
            return 1;
        }

        visited[temp]=true;
        temp=temp->next;
    }
    return false;

}
Node* floydDetectLoop(Node* head){
    if(head==NULL){
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(slow!=NULL && fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
           fast=fast->next; 
        }
        slow=slow->next;
        if(slow==fast){
            cout<<"present at "<<slow->data<<endl;
            return slow;
        }
    }
    return NULL;
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

  if(floydDetectLoop(tail)!=NULL){
    cout<<"Loop is present "<<endl;
  }else{
    cout<<"Loop is not present "<<endl;
  }
}