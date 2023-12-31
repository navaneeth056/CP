// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr ={0,0,0,1};
    int n=arr.size();
    
    int cnt=0;
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            cnt++;
            arr[j]=arr[i+1];
        }
        else{
            j++;
        }
    }

    for(int i=(n-cnt) ; i<n;i++){
        arr[i]=0;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}