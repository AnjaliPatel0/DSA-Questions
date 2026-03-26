// #include<iostream>
// #include<algorithm>
// using namespace std;
// class Node{
// public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int d){
//         data = d;
//         left = NULL;
//         right = NULL;
//     }
// };

// int height(Node* root){
//     if(root==NULL){
//         return 0;
//     }

//     int left=height(root->left);
//     int right=height(root->right);

//     int ans=max(left,right)+1;
//     return ans;
// }
//optimisation of code ->t.c=O(n)

//t.c=O(n^2)
// int diameter(Node* root){
    
//     /* if(root==NULL){
     
//      return 0;
//     }

//     int op1=diameter(root->left);
//     int op2=diameter(root->right);

//     int op3=height(root->left)+height(root->right)+1;

//     int ans= max(op1,max(op2,op3));
//     return ans;
//     */
// }



//optimisation of code ->t.c=O(n)


// int  main(){
//     Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->left->left = new Node(6);
//      root->left->left->left->right = new Node(7);
//     root->left->right = new Node(5);

//     cout << "daimeter of tree: " << diameter(root) << endl;
// }










#include<iostream>
#include<queue>
#include<algorithm>   // ✅ needed for max
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

pair<int,int> diameterfast(Node* root){
    if(root == NULL){
        return make_pair(0,0);  // {diameter, height}
    }

    pair<int,int> left = diameterfast(root->left);
    pair<int,int> right = diameterfast(root->right);

    int op1 = left.first;
    int op2 = right.first;
    int op3 = left.second + right.second ;

    pair<int,int> ans;
    ans.first = max(op1, max(op2, op3));  // diameter
    ans.second = max(left.second, right.second) + 1; // height

    return ans;
}

int diameter(Node* root){
    return diameterfast(root).first;
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->left->left = new Node(6);
    root->left->left->left->right = new Node(7);
    root->left->right = new Node(5);

    cout << "Diameter of tree: " << diameter(root) << endl;
}