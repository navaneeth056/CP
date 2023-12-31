// Given a binary array nums, return the maximum number of consecutive 1's in the array.

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr={1,0,1,1,0,1,1,1,0,0,01,1,1,0};
    int n=arr.size();

    int cont=0;
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            cont++;
            if(cont>max){
                max=cont;
            }
        }
        else{
            cont=0;
        }
    }
    cout<<max;
}