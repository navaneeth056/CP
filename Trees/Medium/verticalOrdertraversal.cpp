// https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/

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


vector<vector<int>> levelOrder(TreeNode* root){
    map<int,map<int,multiset<int>>> nodes;
    queue<pair<TreeNode*,pair<int,int>>> todo;

    todo.push({root,{0,0}});
    while(!todo.empty()){
        auto p = todo.front();
        todo.pop();

        TreeNode* node = p.first;
        int x = p.second.first;
        int y = p.second.second;

        nodes[x][y].insert(node->val);
        if(node->left){
            todo.push({node->left,{x+1,y-1}});
        }
        if(node->right){
            todo.push({node->right,{x+1,y+1}});
        }
    }

    vector<vector<int>>ans;
    for(auto it:nodes){
        vector<int> col;
        for(auto i : it.second){
            col.insert(col.end() , i.second.begin() , i.second.end());
        }
        ans.push_back(col);
    }
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
    levelOrder(root);
}