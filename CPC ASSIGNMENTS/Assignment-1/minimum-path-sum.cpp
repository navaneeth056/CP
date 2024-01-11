// Given a m x n grid filled with non-negative numbers, find a path from top left to bottom right,
// which minimizes the sum of all numbers along its path.
// Note: You can only move either down or right at any point in time.

#include<bits/stdc++.h>
using namespace std;
//RECURSION
            // int minipath(vector<vector<int>>& grid , int row , int col){
            //     if(row==0 && col==0){
            //         return grid[0][0];
            //     }
            //     if(row<0 || col<0){
            //         return 1e9;
            //     }
            //     int up = grid[row][col] + minipath(grid,row-1,col);
            //     int left = grid[row][col] + minipath(grid,row,col-1);

            //     return min(up,left); 
            // }
            // int main(){
            //     vector<vector<int>> grid =  {{1,3,1},{1,5,1},{4,2,1}};
            //     int row = grid.size();
            //     int col = grid[0].size();
            //     cout << minipath(grid,row-1,col-1);
            // }

//MEMOIZATION
            // int minipath(vector<vector<int>>& grid , int row , int col,vector<vector<int>>& dp){
            //     if(row==0 && col==0){
            //         return grid[0][0];
            //     }
            //     if(row<0 || col<0){
            //         return 1e9;
            //     }

            //     if(dp[row][col]!=-1){
            //         return dp[row][col];
            //     }
            //     int up = grid[row][col] + minipath(grid,row-1,col,dp);
            //     int left = grid[row][col] + minipath(grid,row,col-1,dp);

            //     dp[row][col] = min(up,left); 
            //     return dp[row][col];
            // }
            // int main(){
            //     vector<vector<int>> grid =  {{1,3,1},{1,5,1},{4,2,1}};
            //     int row = grid.size();
            //     int col = grid[0].size();
            //     vector<vector<int>> dp(row,vector<int>(col,-1));
            //     cout << minipath(grid,row-1,col-1,dp);
            // }

//TABULATION
                // int minipath(vector<vector<int>>& grid, vector<vector<int>>& dp){
                //                 int n = grid.size();
                //                 int m = grid[0].size();
                //                 for(int i=0;i<n;i++){
                //                     for(int j=0;j<m;j++){
                //                         if(i==0 && j==0){
                //                             dp[i][j] = grid[i][j];
                //                         }
                //                         else{
                //                             int up = grid[i][j];
                //                             if(i>0){
                //                                 up +=dp[i-1][j];
                //                             }
                //                             else{
                //                                 up+=1e9;
                //                             }
                //                             int left = grid[i][j];
                //                             if(j>0){
                //                                 left+=dp[i][j-1];
                //                             }
                //                             else{
                //                                 left+=1e9;
                //                             }
                //                             dp[i][j] = min(up,left);
                //                         }
                //                     }
                //                 }
                //                 return dp[n-1][m-1];
                //             }
                //             int main(){
                //                 vector<vector<int>> grid =  {{1,3,1},{1,5,1},{4,2,1}};
                //                 int row = grid.size();
                //                 int col = grid[0].size();
                //                 vector<vector<int>> dp(row,vector<int>(col,-1));
                //                 cout << minipath(grid,dp);
                //             }

int minipath(vector<vector<int>>& grid, vector<vector<int>>& dp){
                int n = grid.size();
                int m = grid[0].size();
                vector<int> prev(m,0);
                
                for(int i=0;i<n;i++){
                    vector<int> curr(m,0);
                    for(int j=0;j<m;j++){
                        if(i==0 && j==0){
                            curr[j] = grid[i][j];
                        }
                        else{
                            int up = grid[i][j];
                            if(i>0){
                                up +=prev[j];
                            }
                            else{
                                up+=1e9;
                            }
                            int left = grid[i][j];
                            if(j>0){
                                left+=curr[j-1];
                            }
                            else{
                                left+=1e9;
                            }
                            curr[j] = min(up,left);
                        }
                    }
                    prev=curr;
                }
                return prev[m-1];
            }
            int main(){
                vector<vector<int>> grid =  {{1,3,1},{1,5,1},{4,2,1}};
                int row = grid.size();
                int col = grid[0].size();
                vector<vector<int>> dp(row,vector<int>(col,-1));
                cout << minipath(grid,dp);
            }