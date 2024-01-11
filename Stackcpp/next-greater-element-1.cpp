// The next greater element of some element x in an array is the first greater element that is to the right of x in the same array.

// You are given two distinct 0-indexed integer arrays nums1 and nums2, where nums1 is a subset of nums2.

// For each 0 <= i < nums1.length, find the index j such that nums1[i] == nums2[j] and determine the next greater element of nums2[j] in nums2. If there is no next greater element, then the answer for this query is -1.

// Return an array ans of length nums1.length such that ans[i] is the next greater element as described above.

#include<bits/stdc++.h>
using namespace std;

//basic idea

int main(){
    vector<int> nums = {4,12,5,2,1,2,5,3,1,2,4,6};
    int n = nums.size();
    stack<int> st;
    vector<int> ans(n,-1);
    for(int i=n-1; i>=0;i--){
        while(nums[i]>st.top() && !st.empty()){
            st.pop();
        }
        if(st.empty()){
            
            ans[i] = -1;
        }
        else{
            ans[i] = st.top();
            
        }
        st.push(nums[i]);

    }

    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}