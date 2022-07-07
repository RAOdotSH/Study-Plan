/*
Problem Name: Two Sum
Problem Code: 1
Problem Link: https://leetcode.com/problems/two-sum/
Problem Difficulty: Easy

Problem Statement:  Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
                    You may assume that each input would have exactly one solution, and you may not use the same element twice.
                    You can return the answer in any order.

Author: RAO.exe
Date: July 07, 2020
Language: C++
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n" 
#define MOD 1000000007

/*    Solution      */
class Solution {
public:
    vector<int> twoSum(vector<int>& A, int target) {
        unordered_map<int, int> hashMap;
        for(int i = 0; i < A.size(); i++) {
            if(hashMap.find(target - A[i]) != hashMap.end()) {
                return {hashMap[target - A[i]], i};
            }
            hashMap[A[i]] = i;
        }
        return {};
    }
};

/*    Ignore    */
void solve(){
    Solution s;
    vector<int> A = {2,7,11,15}; // Model Input
    int target = 9; // Model Input

    vector<int> ans = s.twoSum(A, target);
    
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