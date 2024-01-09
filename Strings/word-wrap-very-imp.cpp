// You are given ‘N’ words of various lengths, now you have to arrange these words in such a way that each 
// line contains at most ‘M’ characters and each word is separated by a space character. 
// The cost of each line is equal to the cube of extra space characters required to complete ‘M’ characters in that particular line.
// Total cost is equal to the sum of costs of each line.
// Your task is to form this arrangement with the minimum cost possible and return the minimum total cost.

// Using DP
// nums = {3,2,2,5}, k = 6
// base case = when the index == n-1       return 0;
// now we shall do recursion
// either we put the word  in same line if(nums[i]<rem)    or      we put the word in next line if(nums[i]>rem)
// when nums[i]>rem we calculate the cost 
//RECURSION
                    // #include<bits/stdc++.h>
                    // using namespace std;
                    // int recu(int ind , vector<int>& nums , int k , int rem){
                    //     int n = nums.size();
                    //     if(ind==n){
                    //         return 0;
                    //     }
                    //     int cost;
                    //     if(nums[ind]>rem){
                    //         //calculate the cost and move to next word and find the remaining space
                    //         cost =  (rem+1)*(rem+1) + recu(ind+1,nums,k,k-nums[ind]-1);
                    //     }
                    //     else{
                    //         int choice1 =(((rem+1)*(rem+1)) + recu(ind+1,nums,k,k-nums[ind]-1)); 
                    //         int choice2 = recu(ind+1,nums,k,rem-nums[ind]-1);
                    //         cost = min(choice1 , choice2);
                    //     }

                    //     return cost;
                    // }

                    // int main(){
                    //     vector<int> nums = {3,2,2,5};
                    //     int k =6;
                    //     cout<<recu(0,nums,k,k);
                    // }

#include<bits/stdc++.h>
using namespace std;
int recu(int ind , vector<int>& nums , int k , int rem , vector<vector<int>>& dp){
    int n = nums.size();
    if(ind==n){
        return 0;
    }


    if(dp[ind][rem]!=-1){
        return dp[ind][rem];
    }
    int cost;
    if(nums[ind]>rem){
        //calculate the cost and move to next word and find the remaining space
        dp[ind][rem] =  (rem+1)*(rem+1) + recu(ind+1,nums,k,k-nums[ind]-1,dp);
    }
    else{
        int choice1 =(((rem+1)*(rem+1)) + recu(ind+1,nums,k,k-nums[ind]-1,dp)); 
        int choice2 = recu(ind+1,nums,k,rem-nums[ind]-1,dp);
        dp[ind][rem] = min(choice1 , choice2);
    }

    return dp[ind][rem];
}

int main(){
    vector<int> nums = {3,2,2,5};
    int k =6;
    int n = nums.size();
    vector<vector<int>> dp (505,vector<int>(2005,-1));
    cout<<recu(0,nums,k,k,dp);
}