// You are a professional robber planning to rob houses along a street. 
// Each house has a certain amount of money stashed, the only constraint stopping you 
// from robbing each of them is that adjacent houses have security systems connected and
//  it will automatically contact the police if two adjacent houses were broken into on the same night.

// Given an integer array nums representing the amount of money of each house,
//  return the maximum amount of money you can rob tonight without alerting the police.

#include<bits/stdc++.h>
using namespace std;

//Brute Force solution
        // int solve(int ind , vector<int>& nums){
        //     if(ind<=1){
        //         return nums[ind];
        //     }
        //     int pick = nums[ind] + solve(ind-2 , nums);
        //     int not_pick = 0 + solve(ind-1 , nums);

        //     return max(pick , not_pick);
        // }
        // int main(){
        //     vector<int> nums = {1,2,3,1};
        //     int n = nums.size();

        //     cout<<solve(n-1,nums);
        // }

//Memoization
            // int solve(int ind , vector<int>& nums , vector<int>& dp){
            //     if(ind==0){
            //         return nums[ind];
            //     }
            //     if(ind<0){
            //          return 0;
            //      }
            //
            //     if(dp[ind]!=-1){
            //         return dp[ind];
            //     }
            //     int pick = nums[ind] + solve(ind-2 , nums ,dp);
            //     int not_pick = 0 + solve(ind-1 , nums ,dp);

            //     return dp[ind] = max(pick , not_pick);
            // }
            // int main(){
            //     vector<int> nums = {2,7,9,3,1};
                // int n = nums.size();
                // vector<int> dp(n,-1);
                // cout<<solve(n-1,nums,dp);
            // }

//Tabulation
            // int solve(vector<int>& nums){
                
                    // int n = nums.size();
                    // vector<int> dp(n,-1);
                    // dp[0] = nums[0];
                    
                    // for(int i=1;i<n;i++){
                    //     int pick = nums[i];
                    //     if(i>1){
                    //         pick = pick + dp[i-2];
                    //     }
                    //     int not_pick = 0 + dp[i-1];
                    //     dp[i] = max(pick,not_pick);
                    // }
                    

                    // return dp[n-1];
                    // }
            // int main(){
            //     vector<int> nums = {2,7,9,3,1};
            //     cout<<solve(nums);
            // }

//Space Optimization
int solve(vector<int>& nums){
    
                int n = nums.size();
                int prev1= nums[0];
                int prev=0;
                int curr=0;
                
                for(int i=1;i<n;i++){
                    int pick = nums[i];
                    if(i>1){
                        pick = pick + prev;
                    }
                    int not_pick = 0 + prev1;
                    curr = max(pick,not_pick);
                    prev=prev1;
                    prev1=curr;
                }

                

                return prev1;
    
}
int main(){
    vector<int> nums = {2,7,9,3,1};
    cout<<solve(nums);
}