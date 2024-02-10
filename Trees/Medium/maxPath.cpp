// https://leetcode.com/problems/binary-tree-maximum-path-sum/

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

int maxPath(TreeNode* root , int& maxi){
    if(root==nullptr){
        return 0;
    }

    
    int ls = max(0,maxPath(root->left , maxi));
    int rs = max(0,maxPath(root->right,maxi));
    int data = root->val;
    maxi = max(maxi,(ls+rs)+data);
    return max(ls,rs)+data;
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
    int maxi = 0;
    maxPath(root,maxi);
    cout<< maxi;
}
