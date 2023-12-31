// You are given an array ‘arr’ containing ‘n’ integers. You are also given an integer ‘num’, and your task is to find whether ‘num’ is present in the array or not.

#include<bits/stdc++.h>
using namespace std;

int index(int num,int n , vector<int>& arr){
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int> arr={9,3,456,78,7654,321,345};
    int n=arr.size();

    int t;
    cin>>t;
    while(t--){
        int num;
        cin>>num;
        cout<<index(num,n,arr)<<"\n";
    }
}
