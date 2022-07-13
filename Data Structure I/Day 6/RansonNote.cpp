/*
Problem Name: Ransom Note
Problem Code: 383
Problem Link: https://leetcode.com/problems/ransom-note/
Problem Difficulty: Easy

Problem Statement:  Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.
                    Each letter in magazine can only be used once in ransomNote.

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
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> hashMap;

        for(int i=0; i<magazine.size(); i++) hashMap[magazine[i]]++;

        for(auto r : ransomNote){
            if(hashMap[r] == 0) return false;
            hashMap[r]--;
        }

        return true;
    }
};

/*    Ignore    */
void solve(){
    Solution s;
    string ransomNote = "a", magazine = "b";

    cout<<s.canConstruct(ransomNote, magazine)<<endl;
    
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