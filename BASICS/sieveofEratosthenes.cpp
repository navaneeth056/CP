//Aim : find the primes between raange if O(nLog(Log(n)))
//Here we are gonna use extra space O(N)
//Lets create a vector of size n
//mark every index as true

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> sieve(n+1,1);
    sieve[0]=0;
    sieve[1]=0;
    
    for(int i= 2; i*i<=n; i++){
        if(sieve[i]){
            for(int j=i*i;j<=n;j+=i){
                sieve[j]=0;
            }
        }
    }

    for(int i=2;i<=n;i++){
        if(sieve[i]==1){
            cout<<i<<" ";
        }
        continue;
    }
}