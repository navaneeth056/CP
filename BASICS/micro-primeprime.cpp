// // Micro just learned about prime numbers. But he quickly got bored of them, 
// so he defined a new kind of numbers and called them Prime Prime Numbers. 
// A number X is Prime Prime if number of prime numbers from 1 to X (inclusive) are prime.
//  Now he wants to find out the number of Prime Prime numbers from L to R (inclusive). Help Micro with it.

#include<bits/stdc++.h>
using namespace std;

void sievevector(vector<bool>& sieve , vector<int>& ans,int maxN){
    sieve[0]=sieve[1]=false;
    for(int i=2; i*i<=maxN; i++){
        if(sieve[i]){
            for(int j=i*i; j<=maxN; j+=i){
                sieve[i]=false;
            }
        }
    }

    for(int i=2;i<=maxN; i++){
        if(sieve[i]){
            ans.push_back(i);
        }
    }

    
}
int main(){
    int T;
    int L , R;

    int maxN = 1000000;
    vector<bool> sieve(maxN+1,true);
    vector<int> ans;
    sievevector(sieve,ans,maxN);
    cin>>T;
    vector<int> pp;
    while(T--){
        cin >>L>>R;
        int cnt=0;
        for(int i=1; i<=L;i++){
            if(sieve[i]==true){
                cnt++;
            }
        }
        pp[L]=cnt;
    }
}
