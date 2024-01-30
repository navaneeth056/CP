//https://leetcode.com/problems/powx-n/description/

#include<bits/stdc++.h>
using namespace std;

//brute force - 2
// double power(double x , int n){
//     if(n==0){   
//         return 1;
//     }
//     return x*power(x,n-1);
    
// }
// int main(){
//     double x = 2.0000;
//     int n = -2;
//     if(n<0){
//         double ans = 1/power(x,-n);
//         cout<<ans;
//     }
//     else{
//         cout<<power(x,n);
        
//     }
    
// }

//Using Exponentiation
double myPow(double x, int n){
    
    double res=1.00;
    while(n>0){
        if(n%2==0){
            x = x*x;
            n=n/2;
        }
        else{
            res = res*x;
            n=n-1;
        }
    }

    return res;
    
}
int main(){
    double x = 0.00001;
    int n = 2;
    if(n<0){
        n=-1*n;
    }
    double ans = myPow(x,n);
    if(n<0){
        ans = 1/ans;
    }
    cout<<ans;
}