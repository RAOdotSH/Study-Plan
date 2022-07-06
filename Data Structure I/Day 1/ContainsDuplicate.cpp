/*
Problem Name: Contains Duplicate
Problem Code: 217
Problem Link: https://leetcode.com/problems/contains-duplicate/
Problem Difficulty: Easy

Problem Statement: Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

Author: RAO.exe
Date: July 06, 2020
Language: C++
*/


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n" 
#define MOD 1000000007

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> hashMap;

        for(auto num : nums){
            if(hashMap.find(num) != hashMap.end()) return true;

            hashMap[num] = 1;
        }

        return false;
    }
};

/*    Ignore    */
void solve(){
    Solution s;
    vector<int> nums = {1,2,3,1}; // Model Input

    cout<<s.containsDuplicate(nums)<<endl;
    
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