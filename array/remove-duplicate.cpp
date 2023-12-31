// Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.

// Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:

// Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.
// Return k.

#include<bits/stdc++.h>
using namespace std;

// brute force solution is using set (remember whenever unique numbers comes then we use set)

int main(){
        vector<int> arr= {1,1,1,2,2,3,3,3,3,4,5};
        int n = arr.size();
        set<int> st;
        for(int i=0;i<n;i++){
            st.insert(arr[i]);
            // NlogN
        }
        
}
// optimal solution
            // int main(){
            //     vector<int> arr= {1,1,1,2,2,3,3,3,3,4,5};
            //     int n = arr.size();

            //     int i = 0;
            //     for(int j=1; j<n;j++){
            //         if(arr[j]!=arr[i]){
            //             arr[i+1]=arr[j];
            //             i++;
            //         }
            //     }

            //     cout<<i+1;


            // }
