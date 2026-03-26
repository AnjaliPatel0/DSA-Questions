#include<iostream>
#include<queue>
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

pair<bool,int> SumTree(Node* root){
    if(root==NULL ){
        pair<bool,int> p= make_pair(true,0);
        return p;
    }
    if(root->left==NULL && root->right==NULL){
        pair<bool,int> p= make_pair(true,root->data);
        return p;
    }
    

    pair<bool,int> leftAns = SumTree(root->left );
   pair<bool,int> rightAns=SumTree(root->right);

    bool isleftSumtree=leftAns.first;
    bool isrightSumtree=rightAns.first;

    int leftSum=leftAns.second;
     int rightSum=rightAns.second;

     bool condn=root->data == leftSum+rightSum;

     pair<bool,int> ans;
    if(isleftSumtree && isrightSumtree && condn){
        ans.first= true;
        ans.second=root->data == leftSum+rightSum;

    }else{
       ans.first= false;
    }
    return ans;
}
int main(){
   Node* root=new Node(3);
   root->left=new Node(2);
   root->right=new Node(1);

  

   cout<<"Sum tree : " << SumTree(root).first<<endl;  

}