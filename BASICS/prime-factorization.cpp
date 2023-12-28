#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;

    vector<int> ans;
    for(int i=2;i*i<=num; i++){
        if(num%i==0){
            while(num%i==0){
            ans.push_back(i);
            num=num/i;
        }
        }
    }
    if(num>1){
        ans.push_back(num);
    }

    for(int i=0;i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}