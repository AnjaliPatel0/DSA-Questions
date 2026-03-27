#include<iostream>
#include<map>
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
void createMapping(int in[],map<int,int> &nodetoIndex,int n){
     for(int i=0;i<n;i++){
        nodetoIndex[in[i]]=i;
      
     }
       
}
Node* solve(int in[],int post[],int &index,int inorderStart,int inorderEnd,int n,map<int,int> &nodetoIndex){
  //base case
  if(index<0 || inorderStart>inorderEnd){
    return NULL;
  }

  int element= post[index--];
  Node* root=new Node(element);
  int position =nodetoIndex[element];

  //recursive call
   root->right=solve(in,post,index,position+1,inorderEnd,n,nodetoIndex);
  root->left=solve(in,post,index,inorderStart,position-1,n,nodetoIndex);
 

  return root;

}

Node* buildTree(int in[],int post[],int n){
    int postOrderIndex=n-1;
    map<int,int> nodetoIndex;
    createMapping(in,nodetoIndex,n);
    Node* ans= solve(in,post,postOrderIndex,0,n-1,n,nodetoIndex);
    return ans;
}
// inorder print (to verify)
void printInorder(Node* root){
    if(root == NULL) return;
    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
}
int main(){
    int inorder[] = {4,2,5,1,6,3};
    int postorder[] = {1,2,4,5,3,6};
    int n = 6;

    Node* root = buildTree(inorder, postorder, n);

    cout << "Inorder of constructed tree: ";
    printInorder(root);
}