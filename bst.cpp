
#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};





class Solution
{
    public:
    //Function to check whether a Binary Tree is BST or not.
    bool isBST(Node* root) 
    {
      Node*prev=NULL;
      return inorder(root,prev);
    }
    bool inorder(Node *root,Node *&prev){
        if(!root)return true;
        bool isLeftValid = inorder(root->left,prev);
        if(prev && prev->data>=root->data)
        return false;
        
        prev=root;
        bool isRightValid=inorder(root->right,prev);
        return isLeftValid && isRightValid;
    }
};