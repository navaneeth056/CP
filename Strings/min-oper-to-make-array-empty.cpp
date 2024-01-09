// You are given a 0-indexed array nums consisting of positive integers.

// There are two types of operations that you can apply on the array any number of times:

// Choose two elements with equal values and delete them from the array.
// Choose three elements with equal values and delete them from the array.
// Return the minimum number of operations required to make the array empty, or -1 if it is not possible.

#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int> nums = {2,3,3,2,2,4,2,3,4};
    int n = nums.size();
    unordered_map<int,int> hashing;
    for(int i=0;i<n;i++){
        hashing[nums[i]]++;
    }
    int count=0;
    for(auto it : hashing){
        if(it.second==1){
            return -1;
        }

        if(it.second%3==0){
            count += it.second/3;
        }
        else if(it.second%3==1 || it.second%3==2){
            count += ((it.second/3)+1);
            // why +1  say it.second = 4  , we will get it.second%3=1 (4 = 3+1)
        }
        else if(it.second%2==0){
            count += it.second/2;
        }
        else{
            return -1;
        }
    }
    cout<<count;
}