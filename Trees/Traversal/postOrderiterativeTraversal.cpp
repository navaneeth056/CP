//Using 2 stack

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

    vector<int> ans;

    stack<TreeNode*> st1;
    stack<TreeNode*> st2;

    st1.push(root);
    while(!st1.empty()){
        TreeNode* temp = st1.top();
        st2.push(temp);
        st1.pop();
        if(temp->left!=NULL){
            st1.push(temp->left);
        }
        if(temp->right!=NULL){
            st1.push(temp->right);
        }
    }

    while(!st2.empty()){
        ans.push_back(st2.top()->val);
        st2.pop();
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}