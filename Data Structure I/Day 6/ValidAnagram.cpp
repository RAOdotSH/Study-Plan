/*
Problem Name: Valid Anagram
Problem Code: 242
Problem Link: https://leetcode.com/problems/valid-anagram/
Problem Difficulty: Easy

Problem Statement:  Given two strings s and t, return true if t is an anagram of s, and false otherwise.
                    An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

Author: RAO.exe
Date: July 11, 2020
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
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        unordered_map<char, int> hashMap;

        for(int i=0; i<s.size(); i++) hashMap[s[i]]++;

        for(int i=0; i<t.size(); i++){
            if(hashMap[t[i]] == 0) return false;
            hashMap[t[i]]--;
        }

        return true;
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