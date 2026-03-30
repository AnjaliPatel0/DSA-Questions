#include<iostream>
#include<queue>
#include<vector>
#include<map>
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
void solve(Node* root, vector<int> &ans,int level){
    if(root==NULL)
     return;

   if(level==ans.size()){
    ans.push_back(root->data);
   }  

   
   solve(root->right,ans,level+1);
   solve(root->left,ans,level+1);
}
vector<int> RightViewTraversal(Node* root){
    vector<int> ans;
    solve(root,ans,0);
    return ans;
  
}



int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(7);
    root->right->left=new Node(6);
    vector<int> ans=RightViewTraversal(root);
    cout << "top view  traversal: ";
    for(int i : ans){
        cout << i << " ";
    }
}