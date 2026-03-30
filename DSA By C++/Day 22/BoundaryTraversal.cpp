#include<iostream>
#include<queue>
#include<vector>
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
void traverseLeft(Node* root,vector<int> &ans){
    if(root==NULL || (root->left==NULL && root->right==NULL)){
    return ;
    }
    ans.push_back(root->data);
    if(root->left){
        traverseLeft(root->left,ans);
    }else{
        traverseLeft(root->right,ans);
    }
}

void traverseLeaf(Node* root, vector<int> &ans){
     if(root==NULL  ){
       return ;
    }
    if(root->left==NULL && root->right==NULL){
        ans.push_back(root->data);
        return;
    }
    traverseLeaf(root->left,ans);
    traverseLeaf(root->right,ans);
}
void traverseRight(Node* root, vector<int> &ans){
    if(root==NULL || (root->left==NULL && root->right==NULL)){
        return ;
    }
    if(root->right){
        traverseRight(root->right,ans);
    }else{
        traverseRight(root->left,ans);
    }

    ans.push_back(root->data);
}
vector<int> boundary(Node* root){
    vector<int> ans;
    if(root==NULL){
        return ans;
    }

    ans.push_back(root->data);

    //left part print
    traverseLeft(root->left,ans);

    //left subtree
    traverseLeaf(root->left,ans);

    //right suntree
    traverseLeaf(root->right,ans);

    //traverse right part
    traverseRight(root->right,ans);

    return ans;
}
int main(){
    Node* root = new Node(1);
    root->left = new Node(10);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->left->left = new Node(6);
    root->right->right = new Node(5);

    vector<int> ans= boundary(root);
    cout << "boundary traversal: ";
    for(int i : ans){
        cout << i << " ";
    }
}