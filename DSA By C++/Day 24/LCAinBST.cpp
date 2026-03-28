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
Node* LCAinBST(Node* root,int p,int q){
    while(root!=NULL){
        if(root->data <p && root->data <q)
               root=root->right;
       else  if(root->data > p && root->data > q)
               root=root->left;
       else 
            return root;        
    }
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

   //lowest common ancestor 
   Node* ans=LCAinBST(root,2,8);

    if(ans != NULL)
        cout << "LCA: " << ans->data << endl;
    else
        cout << "LCA not found" << endl;
}