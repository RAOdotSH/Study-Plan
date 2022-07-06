/*
Problem Name: Maximum Subarray
Problem Code: 53
Problem Link: https://leetcode.com/problems/maximum-subarray/
Problem Difficulty: Medium

Problem Statement: Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
                    A subarray is a contiguous part of an array.

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
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN, currSum = 0;

        for(auto num : nums){
            currSum += num;

            maxSum = max(maxSum, currSum);

            if(currSum < 0) currSum = 0;
        }

        return maxSum;
    }
};

/*    Ignore    */
void solve(){
    Solution s;
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4}; // Model Input

    cout<<s.maxSubArray(nums)<<endl;
    
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