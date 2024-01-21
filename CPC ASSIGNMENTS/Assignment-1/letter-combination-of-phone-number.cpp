// Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent.
// Return the answer in any order.
// A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.
// vector keypad = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
// 2, keypad[2]=abc


#include<bits/stdc++.h>
using namespace std;

void combination(string& digit ,vector<string>& keypad , vector<string>& ans ,string& temp ,int ind){
    if(ind==digit.size()){
        ans.push_back(temp);
    }
    string value = keypad[digit[ind]-'0'];
    for(int i=0;i<value.size();i++){
        temp.push_back(value[i]);
        combination(digit,keypad,ans,temp,ind+1);
        temp.pop_back();
    }
}
int main(){
    string digit="";
    if(digit==""){
        cout<<"[]";
    }
    vector<string> keypad= {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> ans;
    string temp;
    combination(digit,keypad,ans,temp,0);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}