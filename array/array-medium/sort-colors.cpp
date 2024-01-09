// Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
// // We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
// You must solve this problem without using the library's sort function.

#include<bits/stdc++.h>
using namespace std;

//brute force
//sort it

//better approach
                // int main(){
                //     vector<int> nums = {2,0,2,1,1,0};
                //     int n= nums.size();

                //     int countzero=0;
                //     int countone=0;
                //     int  counttwo=0;

                //     for(int i=0; i<n;i++){
                //         if(nums[i]==0){
                //             countzero++;
                //         }
                //         else if(nums[i]==1){
                //             countone++;
                //         }
                //         else if(nums[i]==2){
                //             counttwo++;
                //         }
                //     }

                //     for(int i=0;i<countzero;i++){
                //         nums[i]=0;
                //     }
                //     for(int i=countzero; i<countzero+countone;i++){
                //         nums[i]=1;
                //     }
                //     for(int i = countzero+countone; i<n;i++){
                //         nums[i]=2;
                //     }


                //     for(int i=0;i<n;i++){
                //         cout << nums[i]<< " ";
                //     }
                    
                // }

//OPTIMAL SOLUTION : DUTCH FLAG
//three pointer approach : low ,mid,high
//intuition  : 
//from 0 to low-1 : all are filled with zeroes
//from low to mid-1 : all are filled with ones
//from high to n-1 : all are filled with twos
//from mid to high-1 : there are some random numbers(0,1,2) ie basically our array


int main(){
    vector<int> nums = {2,0,2,1,1,0};
    int n=nums.size();

    int low=0;
    int mid=0;
    int high=n-1;

    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[mid],nums[low]);
            low++;
            mid++;
        }
        else if(nums[mid]==2){
            swap(nums[mid],nums[high]);
            high--;
        }
        else{
            mid++;
        }
    }

    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
}
