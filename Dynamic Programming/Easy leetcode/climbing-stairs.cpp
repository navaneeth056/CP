// You are climbing a staircase. It takes n steps to reach the top.
// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

#include<bits/stdc++.h>
using namespace std;

int climbingstairs(int ind , vector<int>& dp){
    if(ind<=1){ 
        return ind;     
    }       
    if(dp[ind]!=-1){    
        return  dp[ind];    
    }   

    return dp[ind] = climbingstairs(ind-1,dp)+climbingstairs(ind-2,dp); 

}

int main(){ 
    int n;  
    cin>>n; 
    vector<int> dp(n+1,-1);
    cout<<climbingstairs(n,dp);
}