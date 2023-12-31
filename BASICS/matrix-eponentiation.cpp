// MPOW - Power of matrix
// #matrix
// You will be given a square matrix M and a positive integer power N.
//  You will have to compute M raised to the power N. (that is, M multiplied with itself N times.)

// Input
// First line of input is T (number of test-cases) First line of each test-case contains two integer M and N, 
// where M is size of square matrix that we have to exponent and N is the power to which we have to exponent it. 
// The next M lines describe the input matrix. Each line contains exactly M elements corresponding to each array

// Output
// Output M line corresponding to each row of resultant matrix Each line must have M integers where jth 
// element of ith line is jth element of resultant matrix taken modulo with 1000000007 (109+7).

// Simply, you have to print the resultant square matrix.


#include<bits/stdc++.h>
using namespace std;

void createmat(int dim , vector<vector<int>>& mat){
    for(int i=0; i<dim; i++){
        for(int j=0; j<dim;j++){
            cin>>mat[i][j];
        }
    }
}

void identitymat(int dim , vector<vector<int>>& ident ){
    for(int i=0; i<dim; i++){
        for(int j=0; j<dim;j++){
            if(i==j){
                ident[i][j]=1;
            }
            else{
                ident[i][j]=0;
            }
        }
    }
}
void multimat(vector<vector<int>>& result , vector<vector<int>>& mat){
    
}
void powermat(vector<vector<int>>& mat,int power,int dim){

    // result = ident;
    // for(int i=0;i<ident.size();i++){
    //     for(int j=0; j<ident.size(); j++){
    //         result[i][j]=ident[i][j];
    //     }
    // }
    // for(int i=0;i<power;i++){
    //     result=result*mat;
    // }

    // for(int i=0;i<power;i++){
    //     multimat(result,mat);
    // }

    
}
void printmat(vector<vector<int>>& mat){
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat.size();j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
}
int main(){
    int T;
    cin>>T;
    vector<vector<int>> mat;
    vector<vector<int>> ident;
    vector<vector<int>> result;
    while(T--){
        int dim,power;
        cin>>dim;
        cin>>power;
        createmat(dim,mat);
        identitymat(dim,ident);
        powermat(mat,power,dim);
        printmat(mat);
    }
}