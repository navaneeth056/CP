// There is an array of heights corresponding to 'n' stones. You have to reach from stone 1 to stone ‘n’.
// From stone 'i', it is possible to reach stones 'i'+1, ‘i’+2… ‘i’+'k' , and the cost incurred will be 
// | Height[i]-Height[j] |, where 'j' is the landing stone.
// Return the minimum possible total cost incurred in reaching the stone ‘n’.

//Recursion
//TC : O(k^N) 
//SC : O(N)
        // #include<bits/stdc++.h>
        // using namespace std;

        // int jumP(int ind , int k , vector<int>& height){
        //     if(ind==0){
        //         return 0;
        //     }
        //     int mini = INT_MAX;
        //     for(int j=1;j<=k;j++){
        //         if(ind-j>=0){
        //             int jump = jumP(ind-j , k ,height)+abs(height[ind]-height[ind-j]);   
        //             mini = min(mini,jump);
        //         }
        //     }
        //     return mini;
        // }
        // int main(){
        //     int k;
        //     cin>>k;
        //     vector<int> height = {10, 40, 30, 10};
        //     int n = height.size();   
        //     cout<<jumP(n-1,k,height);
        // }

//MEMOIZATION
//TC : O(N*k)
//SC : O(N)+O(N) 
                // #include<bits/stdc++.h>
                // using namespace std;

                // int jumP(int ind , int k , vector<int>& height , vector<int>& dp){
                //     if(ind==0){
                //         return 0;
                //     }

                //     if(dp[ind]!=-1){
                //         return dp[ind];
                //     }
                //     int mini = INT_MAX;
                //     for(int j=1;j<=k;j++){
                //         if(ind-j>=0){
                //             int jump = jumP(ind-j , k ,height,dp)+abs(height[ind]-height[ind-j]);   
                //             mini = min(mini,jump);
                //         }
                //     }
                //     dp[ind] = mini;
                //     return dp[ind];
                // }
                // int main(){
                //     int k;
                //     cin>>k;
                //     vector<int> height = {10, 40, 30, 10};
                //     int n = height.size();  
                //     vector<int> dp(n,-1);
                //     cout<<jumP(n-1,k,height,dp);
                // }

//Tabulation
//TC : O(N*k)
//SC : O(N)
            // #include<bits/stdc++.h>
            // using namespace std;

            // int jumP(int k , vector<int>& height){
            //     int n = height.size();
            //     vector<int> dp(n);

            //     dp[0] =0;

            //     for(int i=1; i<n;i++){
            //         int mini = INT_MAX;
            //         for(int j=1;j<=k;j++){
            //             if(i-j>=0){
            //                 int jump = dp[i-j]+abs(height[i]-height[i-j]);   
            //                 mini = min(mini,jump);
            //             }
            //         }
            //         dp[i] = mini;
            //     }
                
                
            //     return dp[n-1];
            // }
            // int main(){
            //     int k;
            //     cin>>k;
            //     vector<int> height = {10, 40, 30, 10};
            //     int n = height.size();  
                
            //     cout<<jumP(k,height);
            // }
