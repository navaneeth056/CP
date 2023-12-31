// Given two sorted arrays, ‘a’ and ‘b’, of size ‘n’ and ‘m’, respectively, return the union of the arrays.
// The union of two sorted arrays can be defined as an array consisting of the common and the distinct elements of the two arrays. The final array should be sorted in ascending order.
// Note: 'a' and 'b' may contain duplicate elements, but the union array must contain unique elements.

#include<bits/stdc++.h>
using namespace std;
// BRUTE FORCE APPROACH
            // int main(){
            //     vector<int> a={1,3,5,7};
            //     vector<int> b={1,2,4,5,6,8};
            //     //brute force 

            //     //using set ds
            //     set<int> st;
            //     int n=a.size();
            //     int m=b.size();
            //     for(int i=0;i<n;i++){
            //         st.insert(a[i]);
            //     }
            //     for(int i=0;i<m;i++){
            //         st.insert(b[i]);
            //     }

            //     vector<int> ans;
            //     for(auto it:st){
            //         ans.push_back(it);
            //     }

            //     for(int i=0;i<ans.size();i++){
            //         cout<<ans[i]<<" ";
            //     }

            // }

//OPTIMAL APPROACH
//use two pointer approach;
int main(){
    vector<int> a={1,3,5,7};
    vector<int> b={1,2,4,5,6,8};
    vector<int> unionarr;
    int n=a.size();
    int m=b.size();

    int i=0,j=0;
    while(i<n && j<m){
        if(a[i]<=b[j]){
            if(unionarr.size()==0 || unionarr.back()!=a[i]){
                unionarr.push_back(a[i]);
            }
            i++;
        }
        else if(a[i]>=b[j]){
            if(unionarr.size()==0 || unionarr.back()!=b[j]){
                unionarr.push_back(b[j]);
            }
            j++;
        }
    }

    while(i<n){
        if(unionarr.size()==0 || unionarr.back()!=a[i]){
            unionarr.push_back(a[i]);
        }
        i++;
    }

    while(j<m){
        if(unionarr.size()==0 || unionarr.back()!=b[j]){
            unionarr.push_back(b[j]);
        }
        j++;
    }

    for(int i=0;i<unionarr.size();i++){
        cout<<unionarr[i]<<" ";
        }

}