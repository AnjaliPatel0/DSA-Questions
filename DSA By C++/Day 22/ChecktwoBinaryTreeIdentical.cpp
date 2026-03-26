#include<iostream>
#include<queue>
using namespace std;
class Node{
  public:  
    int data;
    Node* left;
    Node* right;

    Node(int d){
        
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

int isIdentical(Node* r1 ,Node* r2){
    if(r1==NULL && r2==NULL){
        return true;
    }
    if(r1!=NULL && r2==NULL){
        return false;
    }
    if(r1==NULL && r2!=NULL){
        return false;
    }

    int left = isIdentical(r1->left ,r2->left);
    int right=isIdentical(r1->right,r2->right);

    bool value=r1->data==r2->data;
    if(left && right && value){
        return true;

    }else{
        return false;
    }
}
int main(){
   Node* r1=new Node(1);
   r1->left=new Node(2);
   r1->right=new Node(3);

   Node* r2=new Node(1);
   r2->left=new Node(2);
   r2->right=new Node(3);

   cout<<"Determines if two trees are identical: "<<isIdentical(r1,r2);

}