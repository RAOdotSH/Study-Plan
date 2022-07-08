/*
Problem Name: Merge Sorted Array
Problem Code: 88
Problem Link: https://leetcode.com/problems/merge-sorted-array/
Problem Difficulty: Easy

Problem Statement:  You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.
                    Merge nums1 and nums2 into a single array sorted in non-decreasing order.
                    The final sorted array should not be returned by the function, but instead be stored inside the array nums1.
                    To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

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

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1, j = n - 1, k = m + n - 1;

        while(i>=0 && j>=0) nums1[k--] = (nums1[i] > nums2[j]) ? nums1[i--] : nums2[j--]; 
        

        while(j>=0) nums1[k--] = nums2[j--];

        return;
    }
};

/*    Ignore    */
void solve(){
    Solution s;
    vector<int> nums1 = {1,2,3,0,0,0}, nums2 = {2,5,6}; // Model Input
    int m = 3, n = 3; // Model Input

    s.merge(nums1, m, nums2, n);
    
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
