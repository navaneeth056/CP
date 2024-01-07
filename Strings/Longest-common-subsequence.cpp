// Given two strings text1 and text2, return the length of their longest common subsequence. If there is no common subsequence, return 0.

// A subsequence of a string is a new string generated from the original string with some characters (can be none) deleted without changing the relative order of the remaining characters.

// For example, "ace" is a subsequence of "abcde".
// A common subsequence of two strings is a subsequence that is common to both strings.

#include<bits/stdc++.h>
using namespace std;

// RECURSION
            // int lcs(string& str1, string& str2, int ind1,int ind2){
            //     if(ind1<0 || ind2<0){
            //         return 0;
            //     }

            //     if(str1[ind1]==str2[ind2]){
            //         return (1 + lcs(str1,str2,ind1-1,ind2-1));
            //     }
            //     else{
            //         return (0+ max(lcs(str1,str2,ind1-1,ind2) , lcs(str1,str2,ind1,ind2-1)));
            //     }
                
                
            // }
            // int main(){
            //     string str1 , str2;
            //     cin >> str1;
            //     cin >> str2;
            //     int n = str1.size();
            //     int m = str2.size();

            //     int ans = lcs(str1,str2,n-1,m-1);
            //     cout<<ans;
            // }

//MEMOIZATION
            // int lcs(string& str1, string& str2, int ind1,int ind2 , vector<vector<int>>& dp){
            //     if(ind1<0 || ind2<0){
            //         return 0;
            //     }
            //     if(dp[ind1][ind2]!=-1){
            //         return dp[ind1][ind2];
            //     }

            //     if(str1[ind1]==str2[ind2]){
            //         return dp[ind1][ind2] = (1 + lcs(str1,str2,ind1-1,ind2-1,dp));
            //     }
            //     else{
            //         return dp[ind1][ind2]=(0+ max(lcs(str1,str2,ind1-1,ind2,dp) , lcs(str1,str2,ind1,ind2-1,dp)));
            //     }
                
                
            // }
            // int main(){
            //     string str1 , str2;
            //     cin >> str1;
            //     cin >> str2;
            //     int n = str1.size();
            //     int m = str2.size();
            //     vector<vector<int>> dp(n, vector<int>(m,-1));
            //     int ans = lcs(str1,str2,n-1,m-1,dp);
            //     cout<<ans;
            // }

//TABULATION - BOTTOM-UP-APPROACH

                                int lcs(string& str1, string& str2, int n,int m , vector<vector<int>>& dp){
                                    
                                    for(int i=0;i<=n;i++){
                                        dp[i][0]=0;
                                    }
                                    for(int j=0;j<=m;j++){
                                        dp[0][j]=0;
                                    }

                                

                                    for(int i=1;i<=n;i++){
                                        for(int j=1;j<=m;j++){
                                            if(str1[i-1]==str2[j-1]){
                                                dp[i][j] = 1 + dp[i-1][j-1];
                                            }
                                            else{
                                                dp[i][j] = 0 + max(dp[i-1][j] , dp[i][j-1]);
                                            }
                                        }
                                    }
                                    return dp[n][m];
                                    
                                    
                                }
                                

//PRINTING THE LCS
                                int main(){
                                    string str1 , str2;
                                    cin >> str1;
                                    cin >> str2;
                                    int n = str1.size();
                                    int m = str2.size();
                                    vector<vector<int>> dp(n+1, vector<int>(m+1,-1));
                                    int ans = lcs(str1,str2,n,m,dp);

                                    int i=n;
                                    int j=m;
                                    string ansstring="";
                                    for(int i=1;i<=ans;i++){
                                        ansstring+="@";
                                    }

                                    while(i>0 && j>0){
                                        if(str1[i-1]==str2[j-1]){
                                            ansstring[ans-1] = str1[i-1];
                                            ans--;
                                            i--;
                                            j--;
                                        }
                                        else if(str1[i-1]>str2[j-1]){
                                            i--;
                                        }
                                        else{
                                            j--;
                                        }
                                    }
                                    cout<<ans;
                                    cout<<ansstring;
                                }
//SPACE OPTIMIZATION

                                // int lcs(string& str1, string& str2, int n,int m ){
                                //     vector<int> prev(m+1,0) , curr(m+1,0);
                                //     for(int j=0;j<=m;j++){
                                //         prev[j]=0;
                                //     }

                                

                                //     for(int i=1;i<=n;i++){
                                //         for(int j=1;j<=m;j++){
                                //             if(str1[i-1]==str2[j-1]){
                                //                 curr[j] = 1 + prev[j-1];
                                //             }
                                //             else{
                                //                 curr[j] = 0 + max(prev[j] , curr[j-1]);
                                //             }
                                //         }
                                //         prev=curr;
                                //     }
                                //     return prev[m];
                                    
                                    
                                // }
                                // int main(){
                                //     string str1 , str2;
                                //     cin >> str1;
                                //     cin >> str2;
                                //     int n = str1.size();
                                //     int m = str2.size();
                                    
                                //     int ans = lcs(str1,str2,n,m);
                                //     cout<<ans;
                                // }