// https://www.youtube.com/watch?v=0ca1nvR0be4

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

bool isLeaf(TreeNode* root){
    return (root->left==NULL && root->right==NULL);
}
void leftboundary(TreeNode* root , vector<int>& res){
    TreeNode* curr = root->left;
    while(curr){
        if(!isLeaf(curr)){
            res.push_back(curr->val);
        }
        if(curr->left){
            curr = curr->left;
        }
        else{
            curr = curr->right;
        }
    }
}
void rightboundary(TreeNode* root , vector<int>& res){
    TreeNode* curr = root->right;
    vector<int> temp;
    while(curr){
        if(!isLeaf(curr)){
            temp.push_back(curr->val);
        }
        if(curr->right){
            curr = curr->right;
        }
        else{
            curr = curr->left;
        }
    }

    for(int i=0;i<temp.size();i++){
        res.push_back(temp[i]);
    }
}
void leaves(TreeNode* root , vector<int>& res){
    if(isLeaf(root)){
        res.push_back(root->val);
    }
    if(root->left){leaves(root->left,res);}
    if(root->right){leaves(root->right,res);}
}
vector<int> boundaryTraversal(TreeNode* root){
    vector<int> res;
    if(root==nullptr){
        return res;
    }
    if(!isLeaf(root)){
        res.push_back(root->val);
    }
    
    leftboundary(root,res);
    leaves(root,res);
    rightboundary(root,res);

    return res;
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
    ans = boundaryTraversal(root);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}