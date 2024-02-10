// https://leetcode.com/problems/maximum-depth-of-binary-tree/description/

#include<bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
};

TreeNode* createNode(int data){
    TreeNode* root = new TreeNode();
    root->val=data;
    root->left=root->right=NULL;
    return root;
}

int maxHeight(TreeNode* root){
    if(root==NULL){
        return 0;
    }

    int left = 1 + maxHeight(root->left);
    int right = 1 + maxHeight(root->right);

    return max(left,right);
}
int main(){
    TreeNode* root = createNode(1);
    TreeNode* left = createNode(2);
    TreeNode* right = createNode(3);
    TreeNode* left1 = createNode(4);
    TreeNode* right1 = createNode(5);
    root->left = left;
    root->right = right;
    left->left = left1;
    left->right=NULL;
    right->left=right1;
    right->right=NULL;

    cout<<maxHeight(root);
}
