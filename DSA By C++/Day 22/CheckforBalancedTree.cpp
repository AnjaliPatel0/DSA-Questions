#include<iostream>
#include<algorithm>
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

int height(Node* root){
    if(root==NULL){
        return 0;
    }

    int left=height(root->left);
    int right=height(root->right);

    int ans=max(left,right)+1;
    return ans;
}
//optimisation code -> t.c=O(n)
pair<bool,int> isBalancedfast(Node* root){
    if(root==NULL){
       pair<bool,int> p= make_pair(true,0);
        return p;
    }
    pair<bool,int> left = isBalancedfast(root->left);
    pair<bool,int> right = isBalancedfast(root->right);

    bool leftAns=left.first;
    bool rightAns=right.first;

    bool diff =abs(left.second-right.second)<=1;

    pair<bool,int> ans;
    ans.second=max(left.second,right.second)+1;

    if(leftAns && rightAns && diff){
        ans.first= true;
    }else{
        ans.first =false;
    }
    return ans;
}
// t.c =O(n^2)
bool isBalanced(Node* root){
  return isBalancedfast(root).first;
  
    /* if(root==NULL){
        return true;
    }

    bool left= isBalanced(root->left);
    bool right=isBalanced(root->right);

    bool diff =abs(height(root->left)-height(root->right))<=1;

    if(left && right && diff){
        return true;
    }else{
        return false;
    } */
}
int  main(){
    Node* root = new Node(1);
    root->left = new Node(10);
   // root->right = new Node(3);
    root->left->left = new Node(4);
  //  root->left->left->left = new Node(4);
    root->right = new Node(5);

    cout << "check balanced  tree: " << isBalanced(root) << endl;
}

