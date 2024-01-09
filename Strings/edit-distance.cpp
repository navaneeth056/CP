// Given two strings s and t. Return the minimum number of operations required to convert s to t.
// The possible operations are permitted:

// Insert a character at any position of the string.
// Remove any character from the string.
// Replace any character from the string with any other character.

// Memoization
            // #include<bits/stdc++.h>
            // using namespace std;

            // int recursion(string& s ,int ind1, string& t, int ind2 , vector<vector<int>>& dp){
            //     if(ind1<0){
            //         return ind2+1;
            //     }
            //     if(ind2<0){
            //         return ind1+1;
            //     }

            //     if(dp[ind1][ind2]!=-1){
            //         return dp[ind1][ind2];
            //     }
            //     int ans;
            //     if(s[ind1]==t[ind2]){
            //         return dp[ind1][ind2] = 0 + recursion(s,ind1-1,t,ind2-1,dp);
            //     }

            //     return  dp[ind1][ind2]= min(1+recursion(s,ind1,t,ind2-1,dp) , min(1+recursion(s,ind1-1,t,ind2,dp) , 1+recursion(s,ind1-1,t,ind2-1,dp)));

            // }
            // int main(){
            //     string s = "geek";
            //     string t = "gesek";
            //     int n = s.size();
            //     int m = t.size();
            //     vector<vector<int>> dp(n,vector<int>(m,-1));
            //     cout<<recursion(s,n-1,t,m-1,dp);
            // }


//Tabulation

#include<bits/stdc++.h>
using namespace std;
int recursion(string& s,string& t){
    int n = s.size();
    int m = t.size();
    vector<vector<int>> dp(n+1,vector<int>(m+1,-1));

   

    for(int i=0;i<=n;i++){
        dp[i][0] =i;
    }

    for(int j=0;j<=m;j++){
        dp[0][j]=j;
    }


  
    for(int ind1=1;ind1<=n;ind1++){
        for(int ind2=1;ind2<=m;ind2++){
            if(s[ind1-1]==t[ind2-1]){
                dp[ind1][ind2] = 0 + dp[ind1-1][ind2-1];
            }
            else{
                dp[ind1][ind2]= min(1+dp[ind1][ind2-1] , min(1+dp[ind1-1][ind2], 1+dp[ind1-1][ind2-1]));
            }

        }
    }

    return dp[n][m];
}
int main(){
    string s = "geek";
    string t = "gesek";
    int n = s.size();
    int m = t.size();
    cout<<recursion(s,t);
}
// space optimizedd

                // #include<bits/stdc++.h>
                // using namespace std;

                // int recursion(string& s , string& t ){
                //     int n = s.size();
                //     int m = t.size();
                //     vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
                //     vector<int> prev(m+1,0);
                //     vector<int> curr(m+1,0);
                


                //     for(int j=0;j<=m;j++){
                //         prev[j]=j;
                //     }


                    

                //     for(int ind1=1;ind1<=n;ind1++){
                //         for(int ind2=1;ind2<=m;ind2++){
                //             if(s[ind1-1]==t[ind2-1]){   
                //                 curr[ind2] = 0 + prev[ind2-1];
                //             }
                //             else{
                //                 curr[ind2]= min(1+curr[ind2-1] , min(1+prev[ind2], 1+prev[ind2-1]));
                //             }
                //         }
                //         prev=curr;
                //     }

                //     return curr[m];
                // }
                // int main(){
                //     string s = "geek";
                //     string t = "gesek";
                //     int n = s.size();
                //     int m = t.size();
                //     cout<<recursion(s,t);
                // }