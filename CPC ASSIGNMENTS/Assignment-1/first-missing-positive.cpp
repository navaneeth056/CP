// Given an unsorted integer array nums, return the smallest missing positive integer.

// You must implement an algorithm that runs in O(n) time and uses O(1) auxiliary space.

#include<bits/stdc++.h>
using namespace std;

//TC : O(N);
//SC : O(1);
int main(){
    vector<int> nums ={-1,2,3,1,0,5,7};
    int n = nums.size();

    for(int i=0;i<n;i++){
        while(nums[i]>0 && nums[i]<=n && nums[nums[i]-1]!=nums[i]){
                swap(nums[i],nums[nums[i]-1]);
            }
    }

    for(int i=0;i<n;i++){
        if(nums[i]!=i+1){
            cout<<i+1;
            break;
        }
    }
}