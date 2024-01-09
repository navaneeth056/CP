// Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent.
//  Return the answer in any order.
// A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.

// Example 1:

// Input: digits = "23"
// Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]

#include<bits/stdc++.h>
using namespace std;


int main(){
    string num;
    cin>>num;

    vector<string> keypad= {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    
    for(int i=0;i<num.size();i++){
        for(int j=0;j<keypad[num[i]].size();j++){
            
        }
    }
}