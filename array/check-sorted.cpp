// Problem statement
// You have been given an array ‘a’ of ‘n’ non-negative integers.You have to check whether the given array is sorted in the non-decreasing order or not.
// Your task is to return 1 if the given array is sorted. Else, return 0.

#include<bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> arr , int n){
    for(int i =0;i<n;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;

}
int main(){
    vector<int> arr={0,0,0,1};
    int n= arr.size();
    bool ans = isSorted(arr,n);
    cout << ans;
    
    
}