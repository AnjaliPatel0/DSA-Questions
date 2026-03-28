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

bool isBST(Node* root,int min,int max){
    if(root==NULL){
        return true;
    }
    if(root->data >= min && root->data <=max){
          bool left = isBST(root->left,min,root->data);
          bool right = isBST(root->right,root->data,max);
          return left && right;
    }else{
        return false;
    }
}
bool validateBST(Node* root){
  return isBST(root, INT_MIN,INT_MAX);
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

    // Check if BST
    if(validateBST(root)){
        cout << "The tree is a valid BST" << endl;
    } else {
        cout << "The tree is NOT a BST" << endl;
    }

}