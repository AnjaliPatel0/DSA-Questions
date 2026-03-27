#include<iostream>
#include<map>
#include<queue>
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
// create mapping
//return target node
Node* createParentMapping(Node* root, int target,map<Node*,Node*> &nodeToParent){
    Node* res=NULL;

    queue<Node*> q;
    q.push(root);
      nodeToParent[root]=NULL;
    while(!q.empty()){
        Node* front=q.front();
        q.pop();
        if(front->data==target){
            res=front;
        }
        if(front->left){
            nodeToParent[front->left]=front;
            q.push(front->left);
        }
        if(front->right){
            nodeToParent[front->right]=front;
            q.push(front->right);
        }
    }
     return res;
}

int burnTree(Node* root,map<Node*,Node*> &nodeToParent){
    map<Node*,bool> visited;
    queue<Node*> q;
   
    q.push(root);
    visited[root]=true;

    int ans=0;
    while(!q.empty()){
         bool flag=0;
        int size=q.size();
        for(int i=0;i<size;i++){
            Node* front=q.front();
            q.pop();

            if(front->left && !visited[front->left]){
                flag=1;
                q.push(front->left);
                visited[front->left]=1;
            }
            if(front->right && !visited[front->right]){
                flag=1;
                q.push(front->right);
                visited[front->right]=1;
            }
            if(nodeToParent[front] && !visited[nodeToParent[front]]){
                flag=1;
                q.push(nodeToParent[front]);
                visited[nodeToParent[front]]=1;
            }
        }
        if(flag==1){
            ans++;
        }
    }
    return ans;
}
int minTime(Node* root,int target){
   
    map<Node*,Node*> nodeToParent;
    Node* targetNode=createParentMapping(root,target,nodeToParent);
      int ans= burnTree(targetNode,nodeToParent);
    return ans;
}

int main(){
         Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    int target = 5;

    cout << "Minimum time to burn tree: " << minTime(root, target) << endl;
}