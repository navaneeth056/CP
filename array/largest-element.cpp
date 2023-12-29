// Problem statement
// Given an array ‘arr’ of size ‘n’ find the largest element in the array.

#include<bits/stdc++.h>
using namespace std;

// brute force solution
// lets sort it and print the last element
        // int main(){
        //     vector<int> arr = {1,4,7,6,3,2};
        //     sort(arr.begin(),arr.end());
        //     cout<<arr[6-1];
            
        // }

//optimal solution
//lets intialize a variable say largest as arr[0];
//now if an element is larger than largest , we update largest.
int main(){
    vector<int> arr = {1,4,7,6,3,2};
    int largest = arr[0];
    for(int i=0;i<6;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
        continue;
    }

    cout<<largest;
}