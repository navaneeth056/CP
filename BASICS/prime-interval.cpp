#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num){
    if(num==1){
        return false;
    }
    for(int i=2; i*i<=num; i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int L , R;
    cin >>L>>R;
    for(int i=L; i<=R; i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
        continue;
    }
}