/*
Problem Name: Intersection of Two Arrays II
Problem Code: 350
Problem Link: https://leetcode.com/problems/intersection-of-two-arrays-ii/
Problem Difficulty: Easy

Problem Statement:Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.

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
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        vector<int> result;
        int i = 0, j = 0;
        while(i < nums1.size() and j < nums2.size()){
            if(nums1[i] == nums2[j]){
                result.push_back(nums1[i]);
                i++, j++;
            }
            else if(nums1[i] < nums2[j]) i++;
            else j++;
        }

        return result;
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