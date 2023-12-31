// You are given an array 'a' of size 'n' and an integer 'k'.
// Find the length of the longest subarray of 'a' whose sum is equal to 'k'.

#include<bits/stdc++.h>
using namespace std;

        // int main(){
        //     vector<int> nums = {1, 2, 3, 1, 1, 1, 1};
        //     int k=3;
        //     int n = nums.size();
        //     int maxi=0;
        //     for(int i=0;i<n;i++){
        //         int sum=0;
        //         for(int j=i;j<n;j++){
        //             sum+=nums[j];
        //             if(sum==k){
        //                 maxi = max(maxi,(j-i+1));
        //             }
        //         }
        //     }
        //     cout<<maxi;
        // }

//beter approach using map

int main(){
    vector<int> nums = {1, 2, 3, 1, 1, 1, 1};
    int k=3;
    int n = nums.size();

    map<long long , int> mp;
    int sum=0;
    int maxlen=0;
    for(int i=0; i<n;i++){
        sum+=nums[i];
        if(sum==k){
            maxlen = max(maxlen,i+1);
        }
        int rem = sum-k;
        
    }
}