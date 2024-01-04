// Print all the duplicate characters in a string

#include<bits/stdc++.h>
using namespace std;

int main(){
    string S = "geeksforgeeks";
    int n= S.size();
    

    unordered_map<char,int> mpp;

    for(int i=0;i<n;i++){
        mpp[S[i]]++;
    }

    for(auto it:mpp){
        if(it.second>1){
            cout<<it.first<< " "<<it.second <<"\n";  
        }
    }

}