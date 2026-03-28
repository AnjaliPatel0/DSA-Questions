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
int solve(Node* root,int& i,int k){
  if(root==NULL){
    return -1;
  }
  //left
  int left=solve(root->left,i,k);
  if(left!= -1){
    return left;
  }
  //root
  i++;
  if(i==k){
    return root->data;
  }

  //right
  return solve(root->right,i,k);
}
int KthSmallest(Node* root,int i,int k){
    int ans= solve(root,i,k);
    return ans;
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

    
    cout<<"Kth smallest element in BST: "<<KthSmallest(root,0,3)<<endl;

}