// Given an integer numRows, return the first numRows of Pascal's triangle.
// In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

#include<bits/stdc++.h>
using namespace std;


// element at particular row and col
//r-1
//   C          =  (r-1)! / (r-c)!(c-1)!
//    c-1              

        // int nCr(int n , int r){
        //     int res=1;

        //     for(int i=0;i<r;i++){
        //         res=res*(n-i);
        //         res=res/(i+1);
        //     }

        //     return res;
        // }
        // int main(){
        //     int row ,col;
        //     cin>>row;
        //     cin>>col;
        //     cout<<nCr(row-1,col-1);
        // }

//printing the entire row

        // vector<int> nCr(int n , int r , vector<int>& ans){
        //     int res=1;
            
        //     for(int i=0;i<r;i++){
        //         res=res*(n-i);
        //         res=res/(i+1);
        //     }

        //     ans.push_back(res);
        //     return ans;
        // }
        // int main(){
        //     int row ,col;
        //     cin>>row;
        //     vector<int> ans;
        //     for(int i=1;i<=row;i++){
        //         nCr(row-1,i-1,ans);
        //     }

        //     for(int i=0;i<ans.size();i++){
        //         cout<<ans[i]<<" ";
        //     }
            
        // }

// entire pascal triangle till n rows


        int nCr(int n , int r ){
            int res=1;
            
            for(int i=0;i<r;i++){
                res=res*(n-i);
                res=res/(i+1);
            }

            
            return res;
        }
        int main(){
            int row ,col;
            cin>>row;
            
            vector<vector<int>> final;
            for(int j=1;j<=row;j++){
                vector<int> ans;
                for(int i=1;i<=j;i++){
                        ans.push_back (nCr(j-1,i-1));
                }
                final.push_back(ans);
            }
            
            for(auto it : final){
                for(auto ele : it){
                        cout<<ele<<" ";
                }
                cout<<"\n";
            }
            
        }