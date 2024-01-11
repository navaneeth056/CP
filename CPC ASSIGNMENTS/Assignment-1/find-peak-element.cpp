// A peak element is an element that is strictly greater than its neighbors.

// Given a 0-indexed integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.

// You may imagine that nums[-1] = nums[n] = -∞. In other words, an element is always considered to be strictly greater than a neighbor that is outside the array.

// You must write an algorithm that runs in O(log n) time.

#include<bits/stdc++.h>
using namespace std;

//brute force linear search
            // int main(){
            //     vector<int> nums = {1,2,3,1};
            //     int n = nums.size();
            //     nums[-1] = -1;
            //     nums[n] = -1;
            //     for(int i=0;i<n;i++){
            //         if(nums[i]>nums[i-1] && nums[i]>nums[i+1]){
            //             cout<<i;
            //         }
            //     }
            // }

int main(){
    vector<int> nums = {1,2,3,1};
    int n = nums.size();
    int low=1;
    int hig = n-2;

    while(low<=hig){
        int mid = (low+hig)/2;
        if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){
            cout<<mid;
            break;
        }
        else if(nums[mid]>nums[mid-1]){
            low=mid+1;
        }
        else{
            hig = mid-1;
        }
    }

}