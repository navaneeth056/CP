// https://leetcode.com/problems/balanced-binary-tree/description/

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

//Brute force solution
// TC : O(N*N)
// SC : O(N)
// int calculateHeight(TreeNode* root){
//     if(root==NULL){
//         return 0;
//     }

//     return max(calculateHeight(root->left),calculateHeight(root->right));
// }


// bool checkBalanced(TreeNode* root){
//     //base case

//     if(root==NULL){
//         return true;
//     }
//     //check the left heght and right height at each node
//     int lh = calculateHeight(root->left);
//     int rh = calculateHeight(root->right);

//     if(abs(rh-lh)>1){
//         return false;
//     }

//     bool left = checkBalanced(root->left);
//     bool right = checkBalanced(root->right);

//     if(!left||!right){
//         return false;
//     }
//     return true;
// }

int height(TreeNode* root){
    if(root==NULL){
        return 0;
    }

    int lh = height(root->left);

    if(lh==-1){
        return -1;
    }
    int rh = height(root->right);
    if(rh==-1){
        return -1;
    }
    if(abs(lh-rh)>1){
        return -1;
    }

    return max(lh,rh)+1;
    
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

    // cout<<checkBalanced(root);

    int checkBalanced = height(root);
    if(checkBalanced==-1){
        cout<<false;
    }
    else{
        cout<<true;
    }
}