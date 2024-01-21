// Given a string s, return the longest palindromic substring in s.

#include<bits/stdc++.h>
using namespace std;

string lcsubstring(string& str , string& temp){
    int n= str.size();
    int m = temp.size();
    vector<vector<int>> dp (n+1,vector<int>(m+1,0));
    for(int i=0;i<=n;i++){
        dp[i][0] = 0;
    }
    for(int j=0;j<=m;j++){
        dp[0][j]=0;
    }
    int ans = 0;
    int maxi = 0;
    int maxj = 0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(str[i-1]==temp[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
                if(ans<dp[i][j]){
                    ans = dp[i][j];
                    maxi=i;
                    maxj=j;
                }
            }
            else{
                dp[i][j]=0;
            }
        }
    }

    cout<<ans<<" "<<maxi<<" "<<maxj;
    string ansstring= "";
    for(int i=0;i<ans;i++){
        ansstring+="$";
    }
    cout<<"here";
    while(dp[maxi][maxj]!=0){
        ansstring[--ans] = str[maxi-1];
        maxi--;
        maxj--;
        
    }
    

    return ansstring;
}
int main(){
    string str;
    cin>>str;

    string temp;
    temp = str;
    reverse(temp.begin(),temp.end());
    cout<<temp;
    
    cout<<"\n"<<lcsubstring(str,temp);
}