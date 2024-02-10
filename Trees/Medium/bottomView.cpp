// https://www.geeksforgeeks.org/problems/bottom-view-of-binary-tree/1

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

vector<int> bottomView(TreeNode* root){
    queue<pair<TreeNode* , int>> q;
    vector<int> ans;
    map<int , int> mpp;
    q.push({root,0});
    if(root==nullptr){
        return ans;
    }
    while(!q.empty()){
        auto it = q.front();
        q.pop();
        int line = it.second;
        TreeNode* node = it.first;
        
        mpp[line] = node->val;
        

        if(node->left){
            q.push({root->left,line-1});
        }
        if(node->right){
            q.push({root->right,line+1});
        }
    }

    for(auto it:mpp){
        ans.push_back(it.second);
    }
    
    return ans;


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
    vector<int> res = bottomView(root);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}