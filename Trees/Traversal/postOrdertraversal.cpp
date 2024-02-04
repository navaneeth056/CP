// https://leetcode.com/problems/binary-tree-postorder-traversal/description/

#include<bits/stdc++.h>
using namespace std;


struct TreeNode { 
    int val;
    TreeNode* left;
    TreeNode* right;
};

TreeNode* createNode(int data){
    TreeNode* root= new TreeNode();
    root->val=data;
    root->left=NULL;
    root->right=NULL;

    return root;
}

void postOrder(TreeNode* root , vector<int>& ans){
    if(root==NULL){
        return;
    }

    postOrder(root->left , ans);
    postOrder(root->right,ans);
    ans.push_back(root->val);
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

    vector<int> ans;
    postOrder(root,ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}