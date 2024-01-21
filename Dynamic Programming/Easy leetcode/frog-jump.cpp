// There is a frog on the '1st' step of an 'N' stairs long staircase. The frog wants to reach the 'Nth' stair. 
// 'HEIGHT[i]' is the height of the '(i+1)th' stair.If Frog jumps from 'ith' to 'jth' stair, the energy lost in the jump is given by 
// absolute value of ( HEIGHT[i-1] - HEIGHT[j-1] ). If the Frog is on 'ith' staircase, he can jump either to '(i+1)th' stair or
// to '(i+2)th' stair. Your task is to find the minimum total energy used by the frog to reach from '1st' stair to 'Nth' stair.

#include<bits/stdc++.h>
using namespace std;
//Recursion
//TC : O(2^N)
//SC : O(N)

            // int jumP(int ind , vector<int>& height){
            //     if(ind==0){
            //         return 0; // jumping from 0th index to 0th index gives 0
            //     }

            //     int oneStep = abs(height[ind] - height[ind-1]) + jumP(ind-1 , height);
            //     int twoStep = INT_MAX;
            //     if(ind>1){
            //         twoStep = abs(height[ind] - height[ind-2]) + jumP(ind-2 , height);

            //     }
                
            //     return min(oneStep,twoStep);
            // }
            // int  main(){
            //     vector<int> height = {30,10,60,10,60,50};
            //     int n=height.size();
            //     cout<<jumP(n-1,height);
            // }


//Memoization
//TC : O(N)
//SC : O(N) stack space+ O(N) dp array
            // int jumP(int ind , vector<int>& height,vector<int>& dp){
            //     if(ind==0){
            //         return 0; // jumping from 0th index to 0th index gives 0
            //     }

            //     if(dp[ind]!=-1){
            //         return dp[ind];
            //     }

            //     int oneStep = abs(height[ind] - height[ind-1]) + jumP(ind-1 , height , dp);
            //     int twoStep = INT_MAX;
            //     if(ind>1){
            //         twoStep = abs(height[ind] - height[ind-2]) + jumP(ind-2 , height , dp);

            //     }
                
            //     return dp[ind] = min(oneStep,twoStep);
            // }
            // int  main(){
            //     vector<int> height = {30,10,60,10,60,50};
            //     int n=height.size();
            //     vector<int> dp(n,-1);
            //     cout<<jumP(n-1,height,dp);
            // }

//Tabulation
//TC : O(N)
//SC : O(N)

            // int jumP(vector<int>& height){
            //     int n = height.size();
            //     vector<int> dp(n,-1);

            //     dp[0] = 0; // jumping from 0th index to 0th index gives 0
                
            //     for(int ind = 1; ind<n;ind++){
            //         int oneStep = abs(height[ind] - height[ind-1]) + dp[ind-1];
            //         int twoStep = INT_MAX;
            //         if(ind>1){
            //             twoStep = abs(height[ind] - height[ind-2]) + dp[ind-2];
            //         }

            //         dp[ind] = min(oneStep,twoStep);
            //     }
                
            //     return dp[n-1];
            // }
            // int  main(){
            //     vector<int> height = {30,10,60,10,60,50};
            //     int n=height.size();
                
            //     cout<<jumP(height);
            // }

//Space Optimization
//TC : O(N)
//SC : O(1)

int jumP(vector<int>& height){
    int n = height.size();
    int prev=0;
    int prev2=0;

   
    
    for(int ind = 1; ind<n;ind++){
        int oneStep = abs(height[ind] - height[ind-1]) + prev;
        int twoStep = INT_MAX;
        if(ind>1){
            twoStep = abs(height[ind] - height[ind-2]) + prev2;
        }

        int curr = min(oneStep,twoStep);

        prev2=prev;
        prev=curr;
        
    }
    
    return prev;
}
int  main(){
    vector<int> height = {30,10,60,10,60,50};
    int n=height.size();
    
    cout<<jumP(height);
}