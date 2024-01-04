// Given a string S, check if it is palindrome or not.

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s ="acbcba";
    int n = s.size();
    int low = 0;
    int high = n-1;

    while(low<high){
        if(s[low]==s[high]){
            low++;
            high--;
        }
        else{
            cout<<"no";
            break;
        }
    }
    cout<<"true";
}