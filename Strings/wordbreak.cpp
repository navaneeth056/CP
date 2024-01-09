// Given a string s and a dictionary of strings wordDict, return true if s can be segmented into a space-separated sequence of 
// one or more dictionary words.
// DP on strings
#include<bits/stdc++.h>
using namespace std;

//brute force approach
//recursion
                // bool wordBreak(string s, vector<string>& wordDict) {
                //         int n = s.size();
                //         if(n==0){
                //             return true;
                //         }

                //         for(int i=1;i<=n;i++){
                //             if(find(wordDict.begin() , wordDict.end() , s.substr(0,i))!=wordDict.end()){
                                //                 //find() - find(input_iterator first, input_iterator last, const T& value);
                                //                     //If the value is found in the sequence, the iterator to its position is returned.
                                //                     //If the value is not found, the iterator to the last position is returned.
                                //                 //substr() - string substr (size_t pos, size_t len);
                                //                     // It returns a string object.
                //                 if(wordBreak(s.substr(i) , wordDict)){
                //                     return true;
                //                 }
                //             }
                //         }
                //         return false;
                // }
                // int main(){
                //     string s = "leetncode";
                //     vector<string> wordDict= {"leet","leetn","code"};
                //     cout<<wordBreak(s,wordDict);
                    
                // }

// dp memoization

            // bool helper(int ind , string s , vector<string>& wordDict,int n , vector<int>& dp){
            //         if(ind==s.size()){
            //             return true;
            //         }
            //         if(dp[ind]!=-1){
            //             return dp[ind];
            //         }

            //         for(int i=ind; i<n;i++){
            //             if(find(wordDict.begin() , wordDict.end() , s.substr(ind,i-ind+1)) != wordDict.end()){
            //                 if(helper(i+1 , s,wordDict , n ,dp)){
            //                     return dp[ind]=true;
            //                 }
            //             }
            //         }
            //         return dp[ind] =false;
            //     }
            // bool wordBreak(string s, vector<string>& wordDict) {
            //     int n = s.size();
            //     vector<int> dp(n+1,-1);
            //     return helper(0,s,wordDict,n,dp);
            // }

int main(){
    string s = "leetsncode";
    vector<string> wordDict= {"leet","leetn","code"};
    // cout<<wordBreak(s,wordDict);
                    
}