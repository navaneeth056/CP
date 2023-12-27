// Input
// An integer stating the number of queries Q(equal to 50000), and Q lines follow, each containing one integer K between 1 and 5000000 inclusive.

// Output
// Q lines with the answer of each query: the Kth prime number.

#include<bits/stdc++.h>
using namespace std;

void sieve(vector<bool>& sievei){
    
    sievei[0]=false;//instead of 1 and 0 we have taken true or false because int takes up 4bytes.
    //while bool take 1 byte
    sievei[1]=false;

    for(int i=2; i*i<=90000000; i++){
        if(sievei[i]==true){
            for(int j=i*i; j<=90000000; j+=i){
                sievei[j]=false;
            }
        }
    }
}

int main(){

    int t;
    vector<bool> sievei(90000001,true);
    sieve(sievei);

    vector<int> ans;
    for(int i=2;i<90000000;i++){
        if(sievei[i]==true){
            ans.push_back(i);
        }
    }

  

    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<ans[n-1]<<"\n";
    }

}