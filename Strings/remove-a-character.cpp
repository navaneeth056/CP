#include<bits/stdc++.h>
using namespace std;

void recu(string& s , int ind , string& ans){
    if(ind==s.size()){
        return;
    }

    if(s[ind]=='a'){
        return recu(s,ind+1,ans);
    }
    ans+=s[ind];
    return recu(s,ind+1,ans);


}
int main(){
    string s= "abacdabacadaa";
    string ans = "";
    recu(s,0,ans);
    cout<<ans;
}