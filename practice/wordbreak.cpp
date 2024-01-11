// Given a string s and a dictionary of strings wordDict, return true if s can be segmented into a space-separated sequence of 
// one or more dictionary words.
// DP on strings

#include<bits/stdc++.h>
using namespace std;

bool recu(string s , vector<string>& wordDict){
    int n = s.size();
    if(n==0){
        return true;
    }
    for(int i=1;i<=n;i++){
        if(find(wordDict.begin(),wordDict.end() , s.substr(0,i)) != wordDict.end()){
            if(recu(s.substr(i),wordDict)){
                return true;
            }
        }
    }
    return false;
}
int main(){
    string s = "leetcode";
    vector<string> wordDict = {"leet","code"};
    

    cout<<recu(s,wordDict);
    
}