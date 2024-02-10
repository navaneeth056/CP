// https://leetcode.com/problems/binary-tree-right-side-view/description/

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

void rightView(TreeNode* root ,int level ,vector<int>& res){
    if(root==NULL){
        return;
    }
    if(res.size()==level){
        res.push_back(root->val);
    }

    rightView(root->right,level+1,res);
    rightView(root->left,level+1,res);
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
    rightView(root,0,ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}