// Problem statement
// You have been given an array ‘a’ of ‘n’ unique non-negative integers.

// Find the second largest and second smallest element from the array.

// Return the two elements (second largest and second smallest) as another array of size 2.

#include<bits/stdc++.h>
using namespace std;

//brute force approach
//SECOND LARGEST
//sort the give vector
//iterate from back (ie n-2 because n-1 would be the largest)
//if the arr[n-2] != largest , then it is the second largest
//else move the pointer to n-3 and do the same 

            // int main(){
            //     vector<int> arr = {2,4,5,9,2,2};
            //     int n= arr.size();
            //     sort(arr.begin(),arr.end());

            //     int largest = arr[n-1];
            //     int smallest = arr[0];
            //     int second_largest , second_smallest;
            //     for(int i=n-2;i>=0;i--){
            //         if(arr[i]!=largest){
            //             second_largest=arr[i];
            //             break;
            //         }
            //         else if(arr[i]==largest){
            //             continue;
            //         }
                    
            //     }
            //     cout<<second_largest;


            //     for(int i=1;i<n;i++){
            //         if(arr[i]!=smallest){
            //             second_smallest=arr[i];
            //             break;
            //         }
            //         else if(arr[i]==smallest){
            //             continue;
            //         }
            //     }
            //     cout<<second_smallest;
            // }

//better approach
//first find the largest
//then find the second largest

                // int main(){
                //     int largest,second_largest,smallest,second_smallest;
                //     vector<int> arr = {1,3,2,4,5,9,2,2};
                //     int n= arr.size();
                //     largest=arr[0];
                //     smallest=arr[0];
                //     for(int i=0;i<n;i++){
                //         if(arr[i]>largest){
                //             largest=arr[i];
                //         }
                //         if(arr[i]<smallest){
                //             smallest=arr[i];
                //         }
                //     }
                    
                //     second_largest=arr[0];
                //     for(int i=0;i<n;i++){
                //         if(arr[i]!=largest){
                //             if(arr[i]>second_largest){
                //                 second_largest=arr[i];
                //             }
                //         }
                //     }
                //     cout<<second_largest<<" ";

                //     second_smallest=INT_MAX;
                //     for(int i=0;i<n;i++){
                //         if(arr[i]!=smallest){
                //             if(arr[i]>smallest){
                //                 second_smallest=arr[i];
                            
                //             }
                //         }
                //     }
                //     cout<<smallest<<" "<<second_smallest;
                // }

//Optimal approach

int main(){
    int largest,second_largest,smallest,second_smallest;
    vector<int> arr = {1,3,2,4,5,9,2,2};
    int n= arr.size();

    largest=INT_MIN;
    smallest=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            second_largest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>second_largest){
            second_largest = arr[i];
        }
    }

    // cout << largest << " " << second_largest;

    for(int i=0;i<n;i++){
        if(arr[i]<smallest){
            second_smallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i] >smallest && arr[i]<second_smallest){
            second_smallest=arr[i];
        }
    }
    cout << smallest << " " <<second_smallest;
}