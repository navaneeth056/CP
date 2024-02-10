// https://leetcode.com/problems/same-tree/description/

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

bool isSameTree(TreeNode* root1, TreeNode* root2) {
        if(root1==nullptr && root2==nullptr){
            return true;
        }
        if(root1==nullptr || root2 == nullptr || root1->val != root2->val){
            return false;
        }

        bool right = isSameTree(root1->right, root2->right);
        bool left = isSameTree(root1->left, root2->left);

        return right && left;
    }
int main(){

}