/*A word or a sentence in some language is called a pangram if all the characters of the alphabet of this language appear in it at least once. 
Pangrams are often used to demonstrate fonts in printing or test the output devices.

You are given a string consisting of lowercase and uppercase Latin letters. 
Check whether this string is a pangram. We say that the string contains a letter of the Latin alphabet if this letter occurs in the string in uppercase or lowercase.

Input
The first line contains a single integer n (1 ≤ n ≤ 100) — the number of characters in the string.

The second line contains the string. The string consists only of uppercase and lowercase Latin letters.

OutputTheQuickBrownFoxJumpsOverTheLazyDog
Output "YES", if the string is a pangram and "NO" otherwise.*/

#include<bits/stdc++.h>
using namespace std;

bool checkpanagram(string str){
    vector<bool> hashtable(26,false);
    int index;

    for(int i=0; i<str.size();i++){
        if(str[i] >='A' && str[i]<='Z'){
            index = str[i]-'A';
        }
        else if(str[i]>='a' && str[i]<='z'){
            index=str[i]-'a';
        }

        hashtable[index] = true;
    }

    for(int i=0; i<26;i++){
        if(hashtable[i]==false){
            return false;
        }
    }
    return true;

}
int main(){
    string str;
    cin>>str;
    if(checkpanagram(str)==true){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
}