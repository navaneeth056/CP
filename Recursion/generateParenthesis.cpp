// https://leetcode.com/problems/generate-parentheses/description/

//Intution
// if n is given then 2*n be the size of string
// ie 3 open brackets and 3 close brackets
// if open brackets is not present or is equal to close bracket then we can not put a close bracket. 
// we have to go with open bracket
#include<bits/stdc++.h>
using namespace std;
void generateParenthesis(int open , int close ,int n , vector<string>& final , string& ans){
    if(open+close==2*n){
        final.push_back(ans);
        return;
    }

    if(open<n){
        ans+='(';
        generateParenthesis(open+1,close,n,final,ans);
        ans.pop_back();
    }
    if(close<open){
        ans+=')';
        generateParenthesis(open,close+1,n,final,ans);
        ans.pop_back();
    }
}
int main(){
    int n;
    cin>>n;
    string ans="";
    vector<string> final;
    generateParenthesis(0,0,n,final , ans);

    for(int i=0;i<final.size();i++){
        cout<<final[i]<<"\n";
    }
}   