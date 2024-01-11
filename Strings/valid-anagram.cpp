// Given two strings s and t, return true if t is an anagram of s, and false otherwise.
// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, 
// typically using all the original letters exactly once.

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "anagram";
    string t = "nagaram";
    unordered_map<char,int> mpp;

    int n = s.size();
    int m = t.size();
    if(n!=m){
        cout<<false;
    }
    else{
        
        for(int i=0;i<n;i++){
            mpp[s[i]]++;
        }

        for(int i=0;i<n;i++){
            mpp[t[i]]--;
        }
    }

    for(auto it : mpp){
        if(it.second!=0){
            cout<<false;
        }
    }
    cout<<true;


}