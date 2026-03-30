#include<iostream>
#include<vector>
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
void inorder(Node* root,vector<int> &in){
    if(root == NULL) return;
    inorder(root->left, in);
    in.push_back(root->data);
    inorder(root->right, in);
}
bool TwoSuminBST(Node* root,int target){
    vector<int> inorderVal;

    inorder(root,inorderVal);
    int i=0, j=inorderVal.size()-1;

    while(i<j){
        int sum= inorderVal[i]+inorderVal[j];
        if(sum==target)
           return true;
        else if(sum>target)
             j--;
        else
          i++;        
    }
    return false;
}
  

int main(){
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(20);
    root->left->left = new Node(2);
    root->left->right = new Node(8);
    root->right->left = new Node(15);
    root->right->right = new Node(25);

      vector<int> temp;
    cout << "Inorder Traversal: ";
    inorder(root, temp);
    for(int x : temp) cout << x << " ";
    cout << endl;

    int target = 30;

    if(TwoSuminBST(root, target))
        cout << "Pair exists with sum " << target << endl;
    else
        cout << "No such pair exists" << endl;
    
}