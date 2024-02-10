// https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/description/
// similar to level order traversal
// just that in each level we go in opposite direction

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

vector<vector<int>> zigZag(TreeNode* root){
    vector<vector<int>> ans;

    if(root==nullptr){
        return ans;
    }

    queue<TreeNode*> q;
    q.push(root);
    bool left2right=true;
    while(!q.empty()){
        int size =q.size();
        vector<int> ds(size,-1);

        for(int i=0;i<size;i++){
            TreeNode* temp = q.front();
            q.pop();

            int ind = (left2right) ? i : (size-1-i);
            ds[ind] = temp->val;

            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }

        ans.push_back(ds);
        left2right=!left2right;
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


    vector<vector<int>> result = zigZag(root);
    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[i].size(); j++){
            cout<<result[i][j]<<" ";
        }
    }
}