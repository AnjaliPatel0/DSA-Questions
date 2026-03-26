#include<iostream>
#include<queue>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};
void inorder(Node* root,int &count){
    if(root==NULL){
        return;
    }

    inorder(root->left,count);
    //leaf node
    if(root->left==NULL && root->right==NULL){
        count++;
    }
    inorder(root->right,count);
}

int noOfleafNode(Node* root){
    int count=0;
    inorder(root,count);
    return count;
}

int main(){
   Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Number of leaf nodes: " << noOfleafNode(root) << endl;
}