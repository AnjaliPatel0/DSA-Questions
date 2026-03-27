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
Node* insertInBST(Node* root, int d){
    if(root == NULL){
        return new Node(d);
    }

    if(d > root->data){
        root->right = insertInBST(root->right, d);
    }else{
        root->left = insertInBST(root->left, d);
    }

    return root;
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
Node* deleteInBST(Node* root,int val){
    if(root==NULL){
        return root;
    }
    if(root->data==val){
     //0 child
      if(root->left == NULL && root->right == NULL){
        delete root;
        return NULL;
      }
     //1 child

     //left child
     if(root->left!=NULL && root->right==NULL){
        Node* temp=root->left;
        delete root;
        return temp;
     }

     //right part
     if(root->left==NULL && root->right!=NULL){
        Node* temp=root->right;
        delete root;
        return temp;
     }
     //2child
     if(root->left!=NULL && root->right!=NULL){
        int mini =minVal(root->right)->data;
        root->data=mini;
        root->right=deleteInBST(root->right,mini);
        return root;
     }
          
    }else if(root->data>val){
        root->left=deleteInBST(root->left,val);
        return root;
    }else{
        root->right=deleteInBST(root->right,val);
        return root;
    }
}
void inorder(Node* root){
    if(root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main(){
    Node* root = NULL;

    int arr[] = {10, 5, 20, 3, 7, 15, 25};
    int n = 7;

   
         for(int i = 0; i < n; i++){
        root = insertInBST(root, arr[i]);
    }

    cout << "Before deletion: ";
    inorder(root);
    cout << endl;

    root = deleteInBST(root, 7);

    cout << "After deletion: ";
    inorder(root);
         
    

}