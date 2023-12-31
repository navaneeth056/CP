// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

// You must implement a solution with a linear runtime complexity and use only constant extra space.

#include<bits/stdc++.h>
using namespace std;

            // int main(){
            //     vector<int> nums = {2,3,4,2,3,4,1,1,5};
                
            //     int n=nums.size();
            //     for(int i=0;i<n;i++){
            //         int var = nums[i];
            //         int count=0;
            //         for(int j=0;j<n;j++){
            //             if(nums[j]==var){
            //                 count++;
            //             }
            //         }
            //         if(count==1){
            //             cout<<nums[i];
            //             break;
            //         }
            //     }
            // }

                // int main(){
                //     //case : where the elements in nums are only till n
                //     vector<int> nums = {2,3,4,2,3,4,1,1,5};
                //     int n=nums.size();

                //     vector<int> hash(n+1,0);

                //     for(int i=0;i<n;i++){
                //         hash[nums[i]]++;
                //     }

                //     for(int i=0;i<n;i++){
                //         if(hash[i]==1){
                //             cout<<i;
                //         }
                //     }

                // }

                // // using map
                // //better solution
                // int main(){
                //     vector<int> nums= { 1,2,2,4,4,3,3,1,8,9,7,8,9};
                //     int n=nums.size();

                //     map<long long , int> mp;
                //     for(int i=0;i<n;i++){
                //         mp[nums[i]]++;
                //         // sc : O(NlogM) , M = size of map
                //     }

                //     for(auto it:mp){
                //         if(it.second==1){
                //             cout<<it.first;
                //         }
                //     }

                // }

//OPTIMAL SOLUTION
//using XOR
int main(){
    vector<int> nums= { 1,2,2,4,4,3,3,1,8,9,7,8,9};
    int n=nums.size();
    int ans=0;
    for(int i=0;i<n;i++){
        ans^=nums[i];
    }
    cout<<ans;
}