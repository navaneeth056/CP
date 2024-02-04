// https://leetcode.com/problems/binary-tree-level-order-traversal/description/

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

    queue<TreeNode*> q;
    q.push(root);
    vector<vector<int>> ans;
    while(!q.empty()){
        int n = q.size();
        vector<int> leve;
        for(int i=0;i<n;i++){
            TreeNode* temp = q.front();
            q.pop();
            if(temp->left!=NULL){
                q.push(temp->left);
            }
            if(temp->right!=NULL){
                q.push(temp->right);
            }
            leve.push_back(temp->val);
        }
        ans.push_back(leve);
    }

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<< " ";
        }
        cout<<"\n";
    }
    // return ans;
}