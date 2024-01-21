// You are given a 0-indexed string s and a dictionary of words dictionary. 
//You have to break s into one or more non-overlapping substrings such that each substring is present in dictionary. 
//There may be some extra characters in s which are not present in any of the substrings.
// Return the minimum number of extra characters left over if you break up s optimally.
// s = "leetscode", dictionary = ["leet","code","leetcode"]
// basecase : 
    // if ind == n return 0;

#include<bits/stdc++.h>
using namespace std;

int helper(int ind , string& s , vector<string>& dictionary){
    if(ind==s.size()){
        return 0;
    }
    int ans= INT_MAX;
    for(int i=0;i<dictionary.size();i++){
        int j = dictionary[i].size();
        if(ind+j<=s.size() && dictionary[i]==s.substr(ind,j)){
            int isAvailable = helper(ind+j,s,dictionary);
            ans = min(ans,isAvailable);
        }
    }

    int isNotavailable = 1+helper(ind+1,s,dictionary);
    ans = min(ans,isNotavailable);
    return ans;
}
int main(){
    string s = "sayhelloworld";
    vector<string> dictionary = {"hello","world"};

    cout<<helper(0,s,dictionary);
    
}