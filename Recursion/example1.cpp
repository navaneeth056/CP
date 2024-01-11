//print first 3 natural numbers
//Theory
// when main is called it goes to STACK MEMORY
// first main funciton goes in
// then main function calls print(1)..
// then print(1) calls print2(2)
// then print2(2) calls print3(3)
//  |print3(3)|
//  |print2(2)|
//  | print(1)|
//  |  main   |
//  -----------
// Now print3(3) does not have anyone to call so it comes out of his function
//  |         |
//  |print2(2)|
//  | print(1)|
//  |  main   |
//  -----------
// and goes back where it is been called (ie print2(2))
// and now print2(2) come out of his function and goes back where he was called
//  |         |
//  |         |
//  | print(1)|
//  |  main   |
//  -----------
// similary print(1) goes back to where he was called (main function)
//  |         |
//  |         |
//  |         |
//  |  main   |
//  -----------
// when main function gets over the program completes and stops running
//  |         |
//  |         |
//  |         |
//  |         |
//  -----------
// 
// 
// 
// A function that calls itself is recursion


#include<bits/stdc++.h>
using namespace std;

void print3(int n){
    cout<<n<<"\n";
}
void print2(int n){
    cout<<n<<"\n";
    print3(3);
}
void print(int n){
    cout<<n<<"\n";
    print2(2);
}



int main(){
    print(1);
}