// Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

#include<bits/stdc++.h>
using namespace std;
// brute force approach
                        // int main(){
                        //     vector<int> arr = {1,2,3,4,5,6,7};
                        //     int n = arr.size();

                        //     int k;
                        //     cin>>k;
                        //     while(k--){
                        //         int temp = arr[n-1];
                        //         for(int i=n-1; i>0; i--){
                        //             arr[i]=arr[i-1];
                        //         }
                        //         arr[0]=temp;
                        //     }

                        //     for(int i=0;i<n;i++){
                        //         cout<<arr[i]<<" ";
                        //     }    
                        // }

int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    int n = arr.size();
    int k;
    cin>>k;

    reverse(arr.begin(),arr.end());
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k , arr.end());
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}