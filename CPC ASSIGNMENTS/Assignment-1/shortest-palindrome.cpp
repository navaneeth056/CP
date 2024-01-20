// You are given a string s. You can convert s to a 
// palindrome by adding characters in front of it.

// Return the shortest palindrome you can find by performing this transformation.

#include<bits/stdc++.h>
using namespace std;

// using Longest palindromix substring
// reverse the remaining and attach it in the front



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
    cout<<"here"<<"\n";
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
    int n= temp.size();
    
    string shortest = lcsubstring(str,temp);
    cout<<shortest<<"\n";
    int s = shortest.size();
    string newshortest = "";
    for(int i=0;i<(n-s);i++){
        newshortest+="$";
    }
    for(int i=0;i<(n-s);i++){
        newshortest[i]=str[i+1];
    }


    

    reverse(newshortest.begin(),newshortest.end());
    
    cout<<newshortest+str;
}