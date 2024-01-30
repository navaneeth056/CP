// https://leetcode.com/problems/permutations/

#include<bits/stdc++.h>
using namespace std;

void generatePermutation(vector<int>& arr , int n , vector<int>& ds , vector<vector<int>>& ans ,vector<bool>& visited){
    if(ds.size()==n){
        ans.push_back(ds);
        return;
    }

    for(int i=0;i<n;i++){
        if(visited[i]){
           continue; 
        }
        ds.push_back(arr[i]);
        visited[i]=true;
        generatePermutation(arr,n,ds,ans,visited);
        ds.pop_back();
        visited[i]=false;
    }

    
}
int main(){
    vector<int> arr = {1,1,3};
    sort(arr.begin(),arr.end());
    int n = arr.size();
    vector<int> ds;
    vector<vector<int>> ans;
    vector<bool> visited(n,false);
    generatePermutation(arr,n,ds,ans,visited);

    // for(int i=0;i<ans.size();i++){
    //     for(int j=0;j<ans[i].size();j++){
    //         cout<<ans[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    
    //Permutation II
    sort(ans.begin(),ans.end());
    auto last = unique(ans.begin(),ans.end());
    ans.erase(last,ans.end());

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
}