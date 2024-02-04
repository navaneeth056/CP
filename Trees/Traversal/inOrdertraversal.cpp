// https://leetcode.com/problems/binary-tree-inorder-traversal/description/

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

void inOrder(TreeNode* root , vector<int>& ans){
    if(root==NULL){
        return;
    }

    inOrder(root->left , ans);
    ans.push_back(root->val);
    inOrder(root->right,ans);
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

    // vector<int> ans;
    // // inOrder(root,ans);
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }

    stack<TreeNode*> st;
    vector<int> ans;
    TreeNode* temp = root;

    while(true){
        if(temp!=nullptr){
            st.push(temp);
            temp=temp->left;
        }
        else{
            if(st.empty()){break;}
            temp=st.top();
            st.pop();
            ans.push_back(temp->val);
            temp=temp->right;
        }
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    
}
