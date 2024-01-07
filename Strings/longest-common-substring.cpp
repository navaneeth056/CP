// You are given two strings, 'str1' and 'str2'. You have to find the length of the longest common substring.
// A substring is a continuous segment of a string. For example, "bcd" is a substring of "abcd", while "acd" or "cda" are not.

#include<bits/stdc++.h>
using namespace std;

int lcs(string& str1, string& str2, int n,int m , vector<vector<int>>& dp){
    
    for(int i=0;i<=n;i++){
        dp[i][0]=0;
    }
    for(int j=0;j<=m;j++){
        dp[0][j]=0;
    }

   
    int val=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(str1[i-1]==str2[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
                val= max(val,dp[i][j]);
            }
            else{
                dp[i][j] = 0;
            }
        }
    }
    return val;
    
    
}
int main(){
    string str1 , str2;
    cin >> str1;
    cin >> str2;
    int n = str1.size();
    int m = str2.size();
    vector<vector<int>> dp(n+1, vector<int>(m+1,-1));
    int ans = lcs(str1,str2,n,m,dp);
    cout<<ans;
}