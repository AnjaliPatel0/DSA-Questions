#include<iostream>
#include<climits>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
       this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
pair<int,int> predecessorOrSuccessor(Node* root,int key){
   //find key
   Node* temp=root;
   int pred=-1;
   int succ=-1;
   
   while(temp->data!=key){
    if(temp->data>key){
        succ=temp->data;
        temp=temp->left;
    }else{
        pred=temp->data;
        temp=temp->right;
    }
   }

   //pred or succ

   //pred
   Node* leftTree=temp->left;
   while(leftTree!=NULL){
    pred=leftTree->data;
    leftTree=leftTree->right;
   }

   //succ
   Node* rightTree=temp->right;
   while(rightTree!=NULL){
    succ=rightTree->data;
    rightTree=rightTree->left;
   }
   //pair<int,int> ans= make_pair(pred,succ);
   return {pred,succ};
}
  
void inorder(Node* root){
    if(root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
int main(){
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(20);
    root->left->left = new Node(2);
    root->left->right = new Node(8);
    root->right->left = new Node(15);
    root->right->right = new Node(25);

    // Print inorder traversal
    cout << "Inorder Traversal: ";
    inorder(root);
    cout << endl;

    
    int key = 10;

    pair<int,int> ans = predecessorOrSuccessor(root, key);

    cout << "Predecessor: " << ans.first << endl;
    cout << "Successor: " << ans.second << endl;


}