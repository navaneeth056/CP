// Ninja is planing this ‘N’ days-long training schedule. Each day, he can perform any one of these three activities. 
// (Running, Fighting Practice or Learning New Moves). Each activity has some merit points on each day. As Ninja has to improve all his skills,
// he can’t do the same activity in two consecutive days. Can you help Ninja find out the maximum merit points Ninja can earn?

// You are given a 2D array of size N*3 ‘POINTS’ with the points corresponding to each day and activity. 
// Your task is to calculate the maximum number of merit points that Ninja can earn.


#include<bits/stdc++.h>
using namespace std;

//recursion
//TC : 
        // int ninjamax(int day , int prev_ind,int activity , vector<vector<int>>& activity_points){
        //     //on zeroth day 
        //     //base case
        //     int ans =0;
        //     if(day==0){
        //         for(int i=0;i<activity;i++){
        //             if(i!=prev_ind){
        //                 // ans = activity_points[0][prev_ind];
        //                 ans = max(ans,activity_points[0][i]); 
        //             }
        //         }
        //         return ans;
        //     }

        //     for(int i=0;i<activity;i++){
        //         if(i!=prev_ind){
        //             ans=max(ans,activity_points[day][i]+ninjamax(day-1,i,activity,activity_points));
        //         }
        //     }
        //     return ans;
        // }
        // int main(){
        //     vector<vector<int>> activity_points = {{1,2,5},{3,1,1},{3,3,3}};
        //     int days = activity_points.size();
        //     int activity =  3;
        //     cout<<ninjamax(days-1,3,activity,activity_points);
        // }

//Memoization

            // int ninjamax(int day , int prev_ind,int activity , vector<vector<int>>& activity_points,vector<vector<int>>& dp){
            //     //on zeroth day 
            //     //base case
            //     int ans =0;
            //     if(dp[day][prev_ind]!=-1){
            //         return dp[day][prev_ind];
            //     }
            //     if(day==0){
            //         for(int i=0;i<activity;i++){
            //             if(i!=prev_ind){
            //                 // ans = activity_points[0][prev_ind];
            //                 ans = max(ans,activity_points[0][i]); 
                            
            //             }
            //         }
            //         return dp[day][prev_ind]=ans;;
            //     }

            //     for(int i=0;i<activity;i++){
            //         if(i!=prev_ind){
            //             ans=max(ans,activity_points[day][i]+ninjamax(day-1,i,activity,activity_points,dp));
            //         }
            //     }
            //     return dp[day][prev_ind] = ans;
            // }
            // int main(){
            //     vector<vector<int>> activity_points = {{1,2,5},{3,1,1},{3,3,3}};
            //     int days = activity_points.size();
            //     int activity =  3;
            //     vector<vector<int>> dp(days,vector<int>(activity,-1));
            //     cout<<ninjamax(days-1,3,activity,activity_points,dp);
            // }

//Tabulation

//have to do this again