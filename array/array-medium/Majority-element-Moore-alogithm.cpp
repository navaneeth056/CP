// Given an array nums of size n, return the majority element.
// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

#include<bits/stdc++.h>
using namespace std;
//BRUTE FORCE
//two for loop 
//cnt each element
//check cnt>n/2

//TC : O(N^2)
//SC : O(1)

                    // int main(){
                    //     vector<int> nums = {2,2,1,1,1,2,2};
                    //     int n =nums.size();

                    //     for(int i=0;i<n;i++){
                    //         int ele = nums[i];
                    //         int count=0;
                    //         for(int j=0;j<n;j++){
                    //             if(nums[j]==ele){
                    //                 count++;
                    //             }
                    //         }
                    //         if(count>n/2){
                    //             cout<<nums[i];
                    //             break;
                    //         }
                    //     }
                    // }

//Better solution using hashmap
//use map datastructure


//TC : O(NlogN) + O(N)
//SC : O(N)
                    // int main(){
                    //     vector<int> nums = {2,2,1,1,1,2,2};
                    //     int n= nums.size();

                    //     map<int,int> mpp;
                    //     for(int i=0;i<n;i++){
                    //         //O(NlogN)
                    //         mpp[nums[i]]++;
                    //     }

                    //     for(auto it:mpp){
                    //         if(it.second > n/2){
                    //             cout<<it.first;
                    //             break;
                    //         }
                    //     }
                    // }

//MOORE ALGORITHM
//Intuition
//[2,2,1,1,1,2,2]
//take first element
//increase count if its the same number
//decrease the count if its other number
//if a majority element exsits , the count in the first iteration != 0
// so now take this number and cross check it once..

int main(){
    vector<int> nums={2,2,1,1,1,2,2};
    int n = nums.size();
    int count =0;
    int ele;
    for(int i=0;i<n;i++){
        if(count==0){
            count=1;
            ele = nums[i];
        }
        else if(nums[i]==ele){
            count++;
        }
        else{
            count--;
        }
    }

    int crosscheck=0;
    for(int i=0;i<n;i++){
        if(nums[i]==ele){
            crosscheck++;
        }
    }

    if(crosscheck>=n/2){
        cout<<ele;
    }
    
    
}