/*
Problem Name: Best Time to Buy and Sell Stock
Problem Code: 121
Problem Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
Problem Difficulty: Easy

Problem Statement:  You are given an array prices where prices[i] is the price of a given stock on the ith day.
                    You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
                    Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
Author: RAO.exe
Date: July 08, 2020
Language: C++
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n" 
#define MOD 1000000007

/*    Solution    */
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX, maxProfit = 0;

        for(auto price : prices){
            if(price < minPrice) minPrice = price;

            if(price - minPrice > maxProfit) maxProfit = price - minPrice;
            if(maxProfit < 0) maxProfit = 0;
        }

        return maxProfit;
    }
};

/*    Ignore    */
void solve(){
    
    
    return;
}

int main(){
    fastIO
    ll t;
    cin>>t;
           
    while(t--){
        solve();
    }
              
    return 0;
}