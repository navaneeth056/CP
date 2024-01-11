//Function calling another function

#include<bits/stdc++.h>
using namespace std;

void message3(){
    cout<<"hello";
}
void message2(){
    cout<<"hello";
    message3();
}

void message1(){
    cout<<"hello";
    message2();
}
void message(){
    cout<<"hello";
    message1();
}


int main(){
    message();
}