// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.

#include<bits/stdc++.h>
using namespace std;

//brute force
                // int  main(){
                //     vector<int> nums = {3,2,4};
                //     int n = nums.size();

                //     vector<int> ans;
                //     int target = 6;
                //     for(int i=0;i<n;i++){
                //         for(int j=i+1; j<n;j++){
                //             if(nums[i]+nums[j]==target){
                //                 ans.push_back(i);
                //                 ans.push_back(j);
                //             }
                //         }
                //     }

                //     for(int i=0;i<ans.size();i++){
                //         cout<< ans[i]<<" ";
                //     }
                // }

//better solution
// TC : O(NlogN) - ordered map
//    : O(N)     - unordered map (best case)
//SC : O(N)

                // int main(){
                //     //we are using map
                //     //map.find(key) , gives us the value of key if the key is present
                //     //else goes to map.end();
                //     // thats why when we use hashmap.find(more) != hashmap.end() , we mean that if the key is not present add the key to tbe map.. 
                //     vector<int> nums = {3,2,4};
                //     int n = nums.size();
                //     int target =  6;
                //     vector<int> ans;
                    
                //     map<int,int> hashmap;
                //     for(int i=0;i<n;i++){
                //         int more = target-nums[i];
                //         if(hashmap.find(more) != hashmap.end()){
                //             cout<< hashmap[more] << " " <<i;
                //         }

                //         hashmap[nums[i]]=i;
                //     }
                // }

//Optimal Solution
//Two pointer approach
int main(){
    vector<int> nums = {3,1,2,4};
    int n = nums.size();
    vector<int> ans;
    int target = 6;

    int left=0;
    int right = n-1;
    sort(nums.begin(),nums.end());
    while(left<right){
        if(nums[left]+nums[right]==target){
            cout<<left<<" "<<right;
            break;
        }
        else if(nums[left]+nums[right]>target){
            right--;
        }
        else if(nums[left]+nums[right]<target){
            left++;
        }
    }
}