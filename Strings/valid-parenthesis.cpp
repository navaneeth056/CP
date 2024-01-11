// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type.

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "([])";
    int n = s.size();
    
    stack<char> st;

    for(int i=0;i<n;i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            st.push(s[i]);
        }
        else{
            if(st.empty()){
                cout<<false;
            }
            else if(s[i] == ')' && st.top()!='('){cout<<false;}
            else if(s[i] == ']' && st.top()!='['){cout<<false;}
            else if(s[i] == '}' && st.top()!='{'){cout<<false;}
            else{
                st.pop();
            }
        }
    }
    cout<<st.empty();
}