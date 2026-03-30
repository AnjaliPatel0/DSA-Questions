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
vector<int> VerticalTraversal(Node* root){
   map<int,map<int,vector<int> > > nodes;
   queue<pair<Node*,pair<int,int>>> q;
   vector<int> ans;

   if(root==NULL)
    return ans;
   
   q.push(make_pair(root,make_pair(0,0)));
    
   while(!q.empty()){
    pair<Node*,pair<int,int>> temp= q.front();
    q.pop();
    Node* frontNode=temp.first;
    int hd=temp.second.first;
    int lvl= temp.second.second;

    nodes[hd][lvl].push_back(frontNode->data);

    if(frontNode->left){
        q.push(make_pair(frontNode->left,make_pair(hd-1,lvl+1)));
    }
     if(frontNode->right){
        q.push(make_pair(frontNode->right,make_pair(hd+1,lvl+1)));
    }
}
    for(auto i:nodes){
        for(auto j: i.second){
            for(auto k:j.second){
               ans.push_back(k);
            }
        }
        
    }
    return ans;
   }


int main(){
    Node* root = new Node(1);
    root->left = new Node(10);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->left->left = new Node(6);
    root->right->right = new Node(5);

    vector<int> ans= VerticalTraversal(root);
    cout << "vertical traversal: ";
    for(int i : ans){
        cout << i << " ";
    }
}