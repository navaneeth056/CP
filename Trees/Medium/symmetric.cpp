// https://leetcode.com/problems/symmetric-tree/description/

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

bool isSymmetric(TreeNode* left , TreeNode* right){
    if(left== NULL || right==NULL){
        return left==right;
    }
    if(left->val != right->val){
        return false;
    }
    return (isSymmetric(left->left , right->right) && isSymmetric(left->right , right->left));
}
bool symmetric(TreeNode* root){
    return (root==NULL || isSymmetric(root->left , root->right)) ;
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
    cout<<symmetric(root);    
}