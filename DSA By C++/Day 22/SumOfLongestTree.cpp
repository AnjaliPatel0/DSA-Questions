#include<iostream>
#include<queue>
#include<vector>
#include<climits>
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
void solve(Node* root, int sum,int &maxSum,int len ,int &maxlen){
     if(root==NULL){
        if(len>maxlen){
            maxlen=len;
            maxSum=sum;
        }else if(len==maxlen){
            maxSum=max(sum,maxSum);
        }
        return;
     }
     sum=sum+root->data;

     solve(root->left,sum,maxSum,len+1,maxlen);
      solve(root->right,sum,maxSum,len+1,maxlen);
}
int sumOfLongRootToLeaf(Node* root){
    int len=0;
    int maxlen=0;
    int sum=0;
    int maxSum=INT_MIN;
    solve(root,sum, maxSum,len,maxlen);
    return maxSum;
}



int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(7);
    root->right->left=new Node(6);
    sumOfLongRootToLeaf(root);
    cout << " Sum of the longest bloodline of a tree:  "<<sumOfLongRootToLeaf(root);
   
}