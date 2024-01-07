// Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.

#include<bits/stdc++.h>
using namespace std;


bool checkrotate(string str1 , string str2 , int first_ind){
    if(str1.size()!=str2.size()){
        return false;
    } 
    int n = str1.size();
    for(int i=0;i<n;i++){
        if(str1[i]!=str2[(first_ind+i)%n]){
            return false;
        }
    }
    return true;
}
int main(){
    string str1 ="bbbacddceeb";
    string str2 = "ceebbbbacdd";

    char first = str1[0];

    int n = str1.size();

    

    int first_ind;
    for(int i=0;i<n;i++){
        if(str2[i]==first){
            first_ind=i;
        }
    }


    cout<<checkrotate(str1,str2,first_ind);
}