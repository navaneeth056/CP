// Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.
#include<bits/stdc++.h>
using namespace std;

// brute force

                    // int main(){
                    //     vector<int> arr = {1,0,2,4,5};
                    //     int n = arr.size();

                    //     for(int i=1;i<n;i++){
                    //         int flag=0;
                    //         for(int j=0;j<n;j++){
                    //             if(arr[j]==i){
                    //                 flag=1;
                    //             }
                    //         }
                    //         if(flag==0){
                    //             cout<<i;
                    //         }
                    //     }
                    // }

// BETTER SOLUTION
// USING HASHING
// TC : O(N)
// SC : O(N) 
                // int main(){
                //     vector<int> arr = {1,0,2,4,5};
                //     int n = arr.size();
                //     vector<int> hash(n+1,0);
                //     for(int i=0;i<n;i++){
                //         hash[arr[i]]=1;
                //     }

                //     for(int i=1;i<=n;i++){
                //         if(hash[i]!=1){
                //             cout<<i;
                //         }
                //     }
                // }

//OPTIMAL SOLUTION
//Lets use sum to our advantage

int main(){
    vector<int> arr = {1,0,2,4,5};
    int n = arr.size();
    int sum = (n)*(n+1)/2;
    
    int sumarr=0;
    for(int i=0;i<n;i++){
        sumarr+=arr[i];
    }

    cout<<(sum-sumarr);
}