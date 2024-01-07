// The count-and-say sequence is a sequence of digit strings defined by the recursive formula:
// countAndSay(1) = "1"
// countAndSay(n) is the way you would "say" the digit string from countAndSay(n-1), which is then converted into a different digit string.
// To determine how you "say" a digit string, split it into the minimal number of substrings such that each substring contains exactly one unique digit. Then for each substring, say the number of digits, then say the digit. Finally, concatenate every said digit.
// Given a positive integer n, return the nth term of the count-and-say sequence.

#include<bits/stdc++.h>
using namespace std;


string countAndSay(int n) {
        if(n==1){
            return "1";
        }
        if(n==2){
            return "11";
        }

        string two = "11";

        for(int i=3;i<=n;i++){
            two+="$";
            int count=1;
            string ans="";
            for(int j=1;j<two.size();j++){
                if(two[j]!=two[j-1]){
                    ans=ans+to_string(count);
                    ans = ans+two[j-1];
                    count=1;
                }
                else{
                    count++;
                }
            }
            two = ans;
        }

        return two;
    }

int main(){
    int n;
    cin>>n;
    cout<<countAndSay(n);
}