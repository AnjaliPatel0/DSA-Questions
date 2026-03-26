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
    Node* buildTree(Node* root){
        cout<<"Enter the data : "<<endl;
        int data;
        cin>>data;
        root=new Node(data);
        if(data==-1){
            return NULL;
        }
         cout<<"Enter data for inserting in left "<<data<<endl;
         root->left=buildTree(root->left);
         cout<<"Enter data for inserting in right "<<data<<endl;
         root->right=buildTree(root->right);
         return root;
    }

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        if(temp==NULL){
            // purana level complete traverse ho chuka hai
            cout<<endl;
            if(!q.empty()){
                //queue still has some  child noodes
                q.push(NULL);
            }
        }else{
            cout<<temp->data<<" ";

            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
    }

    void InOrderTraversal(Node* root){
        //base case
        if(root==NULL){
            return;
        }

        InOrderTraversal(root->left);
        cout<<root->data<<" ";
        InOrderTraversal(root->right);
    }
    void PreOrderTraversal(Node* root){
        //base case
        if(root==NULL){
            return;
        }
        cout<<root->data<<" ";
        PreOrderTraversal(root->left);
        
        PreOrderTraversal(root->right);
    }

    void PostOrderTraversal(Node* root){
        //base case
        if(root==NULL){
            return;
        }
       
        PostOrderTraversal(root->left);
        
        PostOrderTraversal(root->right);
         cout<<root->data<<" ";
    }
void BuildFromlevelOrder(Node* &root){
    queue<Node*> q;
    cout<<"Enter data for root "<<endl;
    int data;
    cin>>data;
    root= new Node(data);
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout<<"Enter left bode for: "<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;

        if(leftdata!=-1){
             temp->left=new Node(leftdata);
             q.push(temp->left);
        } 

        cout<<"Enter right bode for: "<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;

        if(rightdata!=-1){
             temp->right=new Node(rightdata);
             q.push(temp->right);
        } 
    }
}    
int main(){
    Node* root =NULL;

    BuildFromlevelOrder(root);
    levelOrderTraversal(root);
    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1 



   /* //creation of tree
    root=buildTree(root);

    //level Order of traversal
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
     cout<<"printing th level order traversal outpur "<<endl;
     levelOrderTraversal(root);

     cout<<"Print InOrder traversal: ";
     InOrderTraversal(root);
     cout<<endl;
     cout<<"Print PreOrder traversal: ";
     PreOrderTraversal(root);
    cout<<endl;
      cout<<"Print PostOrder traversal: ";
     PostOrderTraversal(root);*/
} 