// Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, 
// and return an array of the non-overlapping intervals that cover all the intervals in the input.

#include<bits/stdc++.h>
using namespace std;

//int main(){
//    vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
//     int n = intervals.size();

//     vector<vector<int>> ans;
//     for(int i=0;i<n;i++){
//         int start = intervals[i][0];
//         int end = intervals[i][1];

//         if(!ans.empty() && end <= ans.back()[1]){
//             continue;
//         }
//         for(int j=i+1; j<n;j++){
//             if(intervals[j][0]<=end){
//                 end = max(end, intervals[j][1]);
//             }
//             else{
//                 break;
//             }
//         }
//         ans.push_back({start,end});
//     }

//     for(int i=0;i<ans.size();i++){
//         cout<<"{";
//         for(int j=0;j<ans[0].size();j++){
//             cout<<ans[i][j]<<",";
//         }
//         cout<<"}";
//         cout<<"\n";
//     }
// }

//Optimal Solution
int main(){
    vector<vector<int>> intervals={{1,3},{2,6},{8,10},{15,18}};
    int n = intervals.size();

    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        if(ans.empty() || ans.back()[1]<intervals[i][1]){
            ans.push_back(intervals[i]);
        }
        else{
            ans.back()[1] = max(ans.back()[1] , intervals[i][1]);
        }
    }
}