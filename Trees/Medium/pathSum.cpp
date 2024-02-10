// https://leetcode.com/problems/path-sum/description/

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

bool pathSum(TreeNode* root , int sum){
    if(root==NULL){
        if(sum==0){
            return true;
        }
        return false;
    }

    bool left = pathSum(root->left,sum-root->val);
    bool right = pathSum(root->right , sum-root->val);

    return left||right;
}

int main(){
    //given the root

    // pathSum(root,22);
}