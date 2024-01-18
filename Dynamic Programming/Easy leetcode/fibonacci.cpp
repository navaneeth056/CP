// The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence,
// such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,

#include<bits/stdc++.h>
using namespace std;
//Recursion
//TC : O(2^n)
//SC : O(N)
        // int fib(int n){
        //     if(n==0){
        //         return 0;
        //     }
        //     if(n==1){
        //         return 1;
        //     }
        //     return fib(n-1) + fib(n-2);
        // }
        // int main(){
        //     int n ;
        //     cin>>n;
        //     cout<<fib(n);
        // }

//Memoization
//TC : O(N) + O(N)
//SC : O(N)

        // int fib(int n , vector<int>& dp){
        //     if(n<=1){
        //         return n;
        //     }
        //     if(dp[n]!=-1){return dp[n];}
        //     dp[n]=fib(n-1,dp)+fib(n-2,dp);
        //     return dp[n];
        // }

        // int main(){
        //     int n;
        //     cin>>n;
        //     //memo
        //     vector<int> dp(n+1 , -1);
        //     cout<<fib(n,dp);
        // }

//Tabulation
//TC : O(N)
//SC : O(N)

        // int fib(int n){
        //     vector<int> dp(n+1);
        //     dp[0]=0;
        //     dp[1]=1;

        //     for(int i=2;i<=n;i++){
        //         dp[i] = dp[i-1] + dp[i-2];
        //     }
        //     return dp[n];
        // }

        // int main(){
        //     int n;
        //     cin>>n;
        //     //memo
            
        //     fib(n);

        // }

//Space Optimization
//TC : O(N)
//SC : O(1)
int fib(int n){
    // vector<int> dp(n+1);
    //instead of dp(n+1);
    // we are gonna use prev (something similar to dp[i-1]) , prev2 (something similar to dp[i-2]) 
    int prev2=0;
    int prev=1;
    
    for(int i=2;i<=n;i++){
        int curr= prev + prev2;
        prev2 = prev;
        prev = curr;
    }
    return prev;
}

int main(){
    int n;
    cin>>n;
    //memo
    
    cout<<fib(n);

}