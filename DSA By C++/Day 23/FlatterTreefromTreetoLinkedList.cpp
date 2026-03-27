
//using morris traversal
#include<iostream>
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

void flatter(Node* root){
   Node* curr= root;
   while(curr!=NULL){
    if(curr->left){
    Node* prev=curr->left;
    while(prev->right)
        prev=prev->right;
     
    prev->right=curr->right;
    curr->right=curr->left;
    curr->left=NULL;
   }
   curr=curr->right;
}


}
// print flattened list
void printList(Node* root){
    while(root != NULL){
        cout << root->data << " ";
        root = root->right;
    }
}

int main(){
 Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    root->right->right = new Node(6);

    flatter(root);

    cout << "Flattened tree: ";
    printList(root);

}