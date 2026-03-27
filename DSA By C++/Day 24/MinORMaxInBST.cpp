#include<iostream>
#include<queue>
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
Node* insertInBST(Node* root,int d){
   if(root==NULL){
     root= new Node(d);
     return root;
   }

   if(d>root->data){
      //right paert me insert kkrna hai
   root->right=insertInBST(root->right,d);

   }else{
    root->left=insertInBST(root->left,d);
   }
   return root;
}
void takeInput(Node* &root){
      int data;
      cin>>data;
      while(data!=-1){
       root = insertInBST(root,data);
        cin>>data;
      }
}
void levelOrder(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout << endl;

            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout << temp->data << " ";

            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}
Node* minVal(Node* root){
    Node* temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp;
}
Node* maxVal(Node* root){
    Node* temp=root;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp;
}
int main(){
  Node* root=NULL;
  cout<<"Enter data to create BST "<<endl;
  takeInput(root);

   cout << "Level Order Traversal:" << endl;
    levelOrder(root);

    cout << "max value is:" << maxVal(root)->data<<endl;
    

    cout << "min value is:" <<minVal(root)->data<< endl;
    


}