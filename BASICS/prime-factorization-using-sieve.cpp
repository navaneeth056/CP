// lets print the prime factors of a given number

#include<bits/stdc++.h>
using namespace std;

void primefactors(int num){
    // cout<<"i am coming here";
    int maxN = num+1;
    vector<int> sieve(maxN+1,-1);
    sieve[0]=0;
    sieve[1]=1;
    for(int i=2;i<=maxN;i++){
        if(sieve[i]==-1){
            for(int j=i; j<=maxN; j+=i){
                if(sieve[j]==-1){
                    sieve[j] = i;
                }
                
            }
        }
    }
   
    // cout<<"i am coming here to";
    vector<int> ans;
    while(num>=2){

        ans.push_back(sieve[num]);
        num=num/sieve[num];
    }
    for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<"\n";
        }
    
}

int main(){
    int T;
    cin>>T;
    while(T--){
        int num;
       
        cin>>num;
        vector<int> ans;
        primefactors(num);

        
    }
}