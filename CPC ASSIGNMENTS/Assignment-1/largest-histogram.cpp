//Given an array of integers heights representing the histogram's bar height where the width of each bar is 1,
// return the area of the largest rectangle in the histogram.

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int> nums = {2,1,5,6,2,3,1};
//     int n= nums.size();
//     bool flag1 = false;
//     bool flag2= false;
//     vector<int> rightsmall(n,-1);
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             if(nums[i]>nums[j]){
//                 rightsmall[i] = j-1;
//                 flag1 = true;
//                 break;
//             }
//         }
//         if (!flag1) rightsmall[i]=n-1;
//         flag1 = false;
        
//     }

//     for(int i=0;i<n;i++){
//         cout<<rightsmall[i]<<" ";
//     }
//     vector<int> leftsmall(n,-1);
//     for(int i=0;i<n;i++){
//         for(int j=i;j>=0;j--){
//             if(nums[i]>nums[j]){
//                 leftsmall[i] = j+1;
//                 flag2 = true;
//                 break;
//             }
//         }
//         if (!flag2) leftsmall[i]=0;
//         flag2=false; 
//     }

//     cout<<"\n";
//     for(int i=0;i<n;i++){
//         cout<<leftsmall[i]<<" ";
//     }

//     int maxarea = INT_MIN;
//     for(int i=0;i<n;i++){
//         maxarea=  max(maxarea , (nums[i] *(rightsmall[i]-leftsmall[i]+1)));
//     }
//     cout<<maxarea;
// }


//using stack

#include<bits/stdc++.h>
using namespace std;

vector<int> left(vector<int>& nums , int n , vector<int>& leftsmall){
    stack<int> st;
    for(int i=0;i<n;i++){
        while(!st.empty() && nums[st.top()]>nums[i]){
            st.pop();
        }
        if(st.empty()){
            leftsmall[i]=0;
        }
        else{
            leftsmall[i] = st.top()+1;
        }
        st.push(i);
    }

    return leftsmall;
}
vector<int> right(vector<int>& nums , int n , vector<int>& rightsmall){
    stack<int> st;
    for(int i=n-1;i>=0;i--){
        while(!st.empty() && nums[st.top()]>nums[i]){
            st.pop();
        }
        if(st.empty()){
            rightsmall[i]=n-1;
        }
        else{
            rightsmall[i] = st.top()-1;
        }
        st.push(i);
    }

    return rightsmall;
}

int main(){
    vector<int> nums = {2,1,5,6,2,3,1};
    int n = nums.size();
    vector<int> leftsmall(n,-1);
    vector<int> rightsmall(n,-1);
    left(nums,n,leftsmall);
    right(nums,n,rightsmall);


    int maxarea = INT_MIN;
    for(int i=0;i<n;i++){
        maxarea=  max(maxarea , (nums[i] *(rightsmall[i]-leftsmall[i]+1)));
    }
    cout<<maxarea;

}