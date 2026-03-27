#include<iostream>
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

// insert in BST
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

// search in BST
bool searchInBST(Node* root,int x){
    if(root==NULL){
        return false;
    }
    if(root->data==x){
        return true;
    }
    if(root->data>x){
        return searchInBST(root->left,x);
    }
    else{
        return searchInBST(root->right,x);
    }
}

int main(){
    Node* root = NULL;

    int arr[] = {10, 5, 20, 3, 7, 15, 25};
    int n = 7;

    for(int i = 0; i < n; i++){
        root = insertInBST(root, arr[i]);  
    }

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    if(searchInBST(root, key)){
        cout << "Element found in BST" << endl;
    }else{
        cout << "Element NOT found in BST" << endl;
    }
}