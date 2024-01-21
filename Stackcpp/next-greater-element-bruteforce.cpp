#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums= {4,12,5,3,1,2,5,3,1,2,4,6};
    int n = nums.size();
    vector<int> nge(n,-1);

    for(int i=0;i<n;i++){
        for(int j =i;j<n;j++){
            if(nums[j]>nums[i]){
                nge[i]=nums[j];
                break;
            }
        }
    }

    

    for(auto it : nge){
        cout<<it<<" ";
    }
}