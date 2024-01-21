// There is a robot on an m x n grid. The robot is initially located at the top-left corner (i.e., grid[0][0]). 
// The robot tries to move to the bottom-right corner (i.e., grid[m - 1][n - 1]). 
// The robot can only move either down or right at any point in time.
// Given the two integers m and n, return the number of possible unique paths that the robot can take to reach the bottom-right corner.
// The test cases are generated so that the answer will be less than or equal to 2 * 109.

#include<bits/stdc++.h>
using namespace std;
//recursion
//tc : O(2^(N*M))
//sc : O(N+M) (depends on paths length)
        // int gridpath(int ind1,int ind2){
        //     if(ind1==0 && ind2==0){
        //         return 1;
        //     }
        //     if(ind1<0|| ind2<0){
        //         return 0;
        //     }

            
        //     int up = gridpath(ind1-1,ind2);
        //     int left = gridpath(ind1,ind2-1);

        //     return up+left;
        // }
        // int main(){
        //     int n,m;
        //     cin>>n;
        //     cin>>m;

        //     cout<<gridpath(n-1,m-1);
        // }

//memoization

//TC : O(N*M)
//SC : O(N+M) //same as recursion  + O(N*M) dp array 
            // int gridpath(int ind1,int ind2,vector<vector<int>>& dp){
            //     if(ind1==0 && ind2==0){
            //         return 1;
            //     }
            //     if(ind1<0|| ind2<0){
            //         return 0;
            //     }
            //     if(dp[ind1][ind2]!=-1){
            //         return dp[ind1][ind2];
            //     }

                
            //     int up = gridpath(ind1-1,ind2,dp);
            //     int left = gridpath(ind1,ind2-1,dp);

            //     return dp[ind1][ind2]=up+left;
            // }
            // int main(){
            //     int n,m;
            //     cin>>n;
            //     cin>>m;
            //     vector<vector<int>> dp(n,vector<int>(m,-1));
            //     cout<<gridpath(n-1,m-1,dp);
            // }

//Tabulation
//TC : O(N*M)
//SC : O(N*M) 
            // int gridpath(int n  , int m){
            //     vector<vector<int>> dp(n,vector<int>(m,0));
            //     for(int i=0;i<n;i++){
            //         for(int j=0;j<m;j++){
            //             if(i==0 && j==0){
            //                 dp[i][j] = 1;
            //             }
            //             else
            //             {int up=0;
            //             int left=0;
            //             if(i>0){
            //                 up = dp[i-1][j];
            //             }
            //             if(j>0){
            //                 left = dp[i][j-1];
            //             }
                            
            //             dp[i][j] = up+left;}
            //         }
            //     }

            //     return dp[n-1][m-1];
            // }
            // int main(){
            //     int n,m;
            //     cin>>n;
            //     cin>>m;
            //     cout<< gridpath(n,m);
            // }

//Space Opimization
//TC : O(N*M)
//SC : O(N)+O(M)
int gridpath(int n  , int m){
    vector<int> prev(n,0);
    vector<int> curr(n,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0 && j==0){
                curr[j] = 1;
            }
            else
            {int up=0;
            int left=0;
            if(i>0){
                up = prev[j];
            }
            if(j>0){
                left = curr[j-1];
            }
                
            curr[j] = up+left;}

            prev=curr;
        }
    }

    return prev[m-1];
}
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    cout<< gridpath(n,m);
}