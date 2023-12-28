//our aim is to calculate x^n with minimum multiplicatin
//eg : 2^13
// 2^13 = 2 * 2^12
// 2^12 = 4^6
// 4^6 = 16^3
// 16^3 = 16  *  16^2
// 16^2 = 256
// 2^13 = 2*16*256


#include<bits/stdc++.h>
using namespace std;

int expo(int base , int power){

    int res=1;
    while(power){
        if(power%2){ //if odd 
            res = res * base; 
            power = power-1;
        }
        else{
            base = base*base;
            power=power/2;
        }
    }

    return res;
}
int main(){

    int base , power;
    cin>>base>>power;
    
    cout << expo(base,power);
}