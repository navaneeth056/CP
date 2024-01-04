//You are given a 0-indexed integer array nums representing the score of students in an exam. The teacher would like to form one non-empty group of students with maximal strength, where the strength of a group of students of indices i0, i1, i2, ... , ik is defined as nums[i0] * nums[i1] * nums[i2] * ... * nums[ik​].
//Return the maximum strength of a group the teacher can create.
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {3,-1,-5,2,5,-9};
    int n = nums.size();
    int countneg=0 , countzero=0;
    long long prod=1;
    int maxneg=INT_MIN;

    if(n==1){
        return nums[0];
    }
    for(int i=0;i<n;i++){
        if(nums[i]==0){
            countzero++;
            continue;
        }
        if(nums[i]<0){
            countneg++;
            maxneg = max(maxneg,nums[i]);
        }
        prod=prod*nums[i];
    }
    if(countzero==n){
        return 0;
    }

    if(countneg == 1 && countzero > 0 &&  countneg+countzero==n){
        return 0;
    }

 
    
    if(countneg%2 != 0 ){
        prod=prod/maxneg;
    }
    return prod;
}