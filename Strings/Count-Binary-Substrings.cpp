// Given a binary string s, return the number of non-empty substrings that have the same number of 0's and 1's, and all the 0's and all the 1's in these substrings are grouped consecutively.

// Substrings that occur multiple times are counted the number of times they occur.

#include<bits/stdc++.h>
using namespace std;


//first we have to group the binary number such that a set of one and zero are together
//eg : 00110011
// we are grouping 0011

//so lets iterate from 0th index
//when consecutive zeros end , we are counting the consecutive  ones 
int main(){
    string s = "00110011";
    int n = s.size();
    int i=0;
    
    int ans=0;
    while(i<n){
        int cnt0=0;
        int cnt1=0;
        
        if(s[i] == '0'){
            while(i<n && s[i] == '0'){
                cnt0++;
                i++;
            }
            //consecutive zeroes end
            //counting consecutive ones
            int j=i;
            while(j<n && s[j]=='1'){
                cnt1++;
                j++;
            }
        }
        else{
            while(i<n && s[i]=='1'){
                cnt1++;
                i++;
            }
            //consecutive ones end
            //counting consectuive zero
            int j=i;
            while(j<n && s[j]=='0'){
                cnt0++;
                j++;
            }
        }
        ans+=min(cnt0,cnt1);
    }
    

    cout<< ans;
}