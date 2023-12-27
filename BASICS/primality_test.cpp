//O(sqrt(N))
//Logic : N = 12 
// we are loooking for pairs a*b = N
//(1*12) (2*6) (3*4)
// a<sqrt(N) ; b>sqrt(N) in this condition only the a*b = N satisfies



#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n){
    if(n<2){
        return false;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    if(isPrime(n)){
	        cout<<"yes\n";
	    }
	    else{
	        cout<<"no\n";
	    }
	}

}

