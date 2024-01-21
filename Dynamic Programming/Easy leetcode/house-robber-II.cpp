// You are a professional robber planning to rob houses along a street. 
// Each house has a certain amount of money stashed. All houses at this place are arranged in a circle. 
// That means the first house is the neighbor of the last one. Meanwhile, adjacent houses have a security system connected, 
// and it will automatically contact the police if two adjacent houses were broken into on the same night.

//leave the first element 
//leave the last element

//and  do the same thing as house-robber.cpp

#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>& nums){
    
                int n = nums.size();
                int prev1= nums[0];
                int prev=0;
                int curr=0;
                
                for(int i=1;i<n;i++){
                    int pick = nums[i];
                    if(i>1){
                        pick = pick + prev;
                    }
                    int not_pick = 0 + prev1;
                    curr = max(pick,not_pick);
                    prev=prev1;
                    prev1=curr;
                }

                

                return prev1;
    
}

int main(){
    vector<int> nums = {2,3,2};
    int n = nums.size();
    vector<int> temp;
    vector<int> temp1;
    for(int i=0;i<n;i++){
        if(i!=0)
            temp.push_back(nums[i]);
        if(i!=n-1)
            temp1.push_back(nums[i]);
    }   
    int ans = solve(temp);
    int ans1 = solve(temp1);

    cout<<max(ans,ans1);
}