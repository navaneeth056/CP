// https://leetcode.com/problems/binary-tree-preorder-traversal/

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

//Using recursion 
//TC : O(N)
//SC : O(N)

// void preOrder(Node* root){
//     if(root==NULL){
//         return;
//     }

//     cout<<root->data<<" ";
//     preOrder(root->leftNode);
//     preOrder(root->rightNode);

// }
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

    // preOrder(root);

    stack<TreeNode*> st;
    st.push(root);
    vector<int> ans;
    while(!st.empty()){
        TreeNode* temp = st.top();
        st.pop();
        ans.push_back(temp->val);

        if(temp->right!=nullptr){
            st.push(temp->right);
        }
        if(temp->left!=nullptr){
            st.push(temp->left);
        }
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}