// Given an integer array nums of unique elements, return all possible subsets (the power set).

// The solution set must not contain duplicate subsets. Return the solution in any order.

#include<bits/stdc++.h>
using namespace std;

void subset(int ind, vector<int>& arr , vector<vector<int>>& ans , vector<int>& ds,int n){
    if(ind>=n){
        ans.push_back(ds);
        return;
    }

    ds.push_back(arr[ind]);
    subset(ind+1,arr,ans,ds,n);
    ds.pop_back();
    subset(ind+1,arr,ans,ds,n);
}
int  main(){
    vector<int> arr = {1,2,3};
    vector<vector<int>> ans;
    vector<int> ds;
    int n = arr.size();
    subset(0,arr,ans,ds,n);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }           
        cout<<"\n";
    }
}