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
 /*int findPosition(int in[],int element,int n){
     for(int i=0;i<n;i++){
        if(in[i]==element){
            return i;
        }
      
     }
       return -1;
}
Node* solve(int in[],int pre[],int &index,int inorderStart,int inorderEnd,int n){
  //base case
  if(index>=n || inorderStart>inorderEnd){
    return NULL;
  }

  int element= pre[index++];
  Node* root=new Node(element);
  int position =findPosition(in ,element,n);

  //recursive call
  root->left=solve(in,pre,index,inorderStart,position-1,n);
  root->right=solve(in,pre,index,position+1,inorderEnd,n);

  return root;

}

Node* buildTree(int in[],int pre[],int n){
    int preOrderIndex=0;
    Node* ans= solve(in,pre,preOrderIndex,0,n-1,n);
    return ans;
}
// inorder print (to verify)
void printInorder(Node* root){
    if(root == NULL) return;
    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
}*/


//optimisation code
void createMapping(int in[],map<int,int> &nodetoIndex,int n){
     for(int i=0;i<n;i++){
        nodetoIndex[in[i]]=i;
      
     }
       
}
Node* solve(int in[],int pre[],int &index,int inorderStart,int inorderEnd,int n,map<int,int> &nodetoIndex){
  //base case
  if(index>=n || inorderStart>inorderEnd){
    return NULL;
  }

  int element= pre[index++];
  Node* root=new Node(element);
  int position =nodetoIndex[element];

  //recursive call
  root->left=solve(in,pre,index,inorderStart,position-1,n,nodetoIndex);
  root->right=solve(in,pre,index,position+1,inorderEnd,n,nodetoIndex);

  return root;

}

Node* buildTree(int in[],int pre[],int n){
    int preOrderIndex=0;
    map<int,int> nodetoIndex;
    createMapping(in,nodetoIndex,n);
    Node* ans= solve(in,pre,preOrderIndex,0,n-1,n,nodetoIndex);
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
    int preorder[] = {1,2,4,5,3,6};
    int n = 6;

    Node* root = buildTree(inorder, preorder, n);

    cout << "Inorder of constructed tree: ";
    printInorder(root);
}