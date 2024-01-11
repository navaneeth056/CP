// Given n non-negative integers representing an elevation map where the width of each bar is 1, 
// compute how much water it can trap after raining.

#include<bits/stdc++.h>
using namespace std;


//BRUTE FORCE SOLUTION

// Intution 
// find leftmax and rightmax of that particulat index
// after finding 
// min(leftmax,rightmax)-arr[i]; why this? 
// water will be holded only for min value of block

// int main(){
//     vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
//     int n = height.size();
//     int waterstored=0;
//     for(int i=0;i<n;i++){
//         //finding leftmax
//         int leftmax =0;
//         int rightmax=0;
//         int j=i;
//         while(j>=0){
//             leftmax=max(leftmax,height[j]);
//             j--;
//         }

//         //finding right max
//         j=i;
//         while(j<n){
//             rightmax= max(rightmax,height[j]);
//             j++;
//         }

//         waterstored += (min(leftmax,rightmax) - height[i]);
//     }
//     cout<<waterstored;
// }

//Better solution
//we are gonna use extra space and reduce the tc
// we are gonna use preffix and suffix

            // int main(){
            //     vector<int> height = {4,2,0,3,2,5};
            //     int n = height.size();

            //     vector<int> prefix(n,0);
            //     prefix[0]=height[0];
            //     vector<int> suffix(n,0);
            //     suffix[n-1]= height[n-1];

            //     for(int i=1;i<n;i++){
            //         prefix[i] = max(prefix[i-1],height[i]);
            //     }
            //     for(int i=n-2;i>=0;i--){
            //         suffix[i] = max(suffix[i+1],height[i]);
            //     }

            //     int watertrapped=0;
            //     for(int i=0;i<n;i++){
            //         watertrapped+=(min(prefix[i],suffix[i])-height[i]);
            //     }
            //     cout<<watertrapped;

            // }

//Optimal solution

int trap(vector < int > & arr) {
        int n = arr.size();
        int prefix[n], suffix[n];
        prefix[0] = arr[0];
        for (int i = 1; i < n; i++) {
            prefix[i] = max(prefix[i - 1], arr[i]);
        }
        suffix[n - 1] = arr[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            suffix[i] = max(suffix[i + 1], arr[i]);
        }
        int waterTrapped = 0;
        for (int i = 0; i < n; i++) {
            waterTrapped += min(prefix[i], suffix[i]) - arr[i];
        }
        return waterTrapped;
}

int main() {
  vector < int > arr;
  arr = {0,1,0,2,1,0,1,3,2,1,2,1};
  cout << "The water that can be trapped is " << trap(arr) << endl;
}