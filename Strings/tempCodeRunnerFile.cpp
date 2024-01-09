int recu(int ind , vector<int>& nums , int k , int rem , vector<vector<int>>& dp){
    int n = nums.size();
    if(ind==n){
        return 0;
    }


    if(dp[ind][rem]!=-1){
        return dp[ind][rem];
    }
    int cost;
    if(nums[ind]>rem){
        //calculate the cost and move to next word and find the remaining space
        dp[ind][rem] =  (rem+1)*(rem+1) + recu(ind+1,nums,k,k-nums[ind]-1,dp);
    }
    else{
        int choice1 =(((rem+1)*(rem+1)) + recu(ind+1,nums,k,k-nums[ind]-1,dp)); 
        int choice2 = recu(ind+1,nums,k,rem-nums[ind]-1,dp);
        dp[ind][rem] = min(choice1 , choice2);
    }

    return dp[ind][rem];
}