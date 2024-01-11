#include<bits/stdc++.h>
using namespace std;


void print(int n){
    if(n>5){
        return;
    }
    cout<<n<<"\n";
    print(n+1);
}
int main(){
    print(1);
}