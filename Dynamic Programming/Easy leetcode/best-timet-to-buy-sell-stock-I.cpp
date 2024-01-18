// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.


#include<bits/stdc++.h>
using namespace std;

int findmaxprofit(vector<int>& prices, int n){
    int maxProfit = 0;
    int minibuy = prices[0];

    for(int i=1;i<n;i++){
        int profit = prices[i] - minibuy;
        maxProfit = max(maxProfit,profit);
        minibuy = min(minibuy,prices[i]);
    }

    return maxProfit;
    
}
int main(){
    vector<int> prices = {7,1,5,3,6,4};
    int n = prices.size();
    cout<<findmaxprofit(prices,n);
}