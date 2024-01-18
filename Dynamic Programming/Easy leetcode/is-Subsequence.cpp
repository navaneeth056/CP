// Given two strings s and t, return true if s is a subsequence of t, or false otherwise.
// A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) 
// of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).

#include<bits/stdc++.h>
using namespace std;

bool issubsequence(string s , string t , int ind1 , int ind2,vector<vector<int>>& dp){
    
    if(ind2==0 && ind1>0){
        return false;
    }
    if(dp[ind1][ind2]!=-1){
        return dp[ind1][ind2];
    }

    if(s[ind1]==s[ind2]){
        return dp[ind1][ind2]=issubsequence(s,t,ind1-1,ind2-1,dp);
    }
    return dp[ind1][ind2]=issubsequence(s,t,ind1,ind2-1,dp);

}
int main(){
    string s="axc";
    string t = "ahbgdc";
    int n = s.size();
    int m = t.size();
    vector<vector<int>> dp(n,vector<int>(m,-1));
    cout<<issubsequence(s,t,n-1,m-1,dp);
}