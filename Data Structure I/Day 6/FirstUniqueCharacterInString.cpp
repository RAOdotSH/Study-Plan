/*
Problem Name: First Unique Character in a String
Problem Code: 387
Problem Link: https://leetcode.com/problems/first-unique-character-in-a-string/
Problem Difficulty: Easy

Problem Statement:  Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

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
    int firstUniqChar(string s) {
        vector<int> hashMap(26, 0);

        for(int i=0; i<s.size(); i++) hashMap[s[i] - 'a']++;

        for(int i=0; i<s.size(); i++){
            if(hashMap[s[i] - 'a'] == 1) return i;
        }

        return -1;
    }
};

/*    Ignore    */
void solve(){
    Solution S;
    string s = "leetcode";

    cout<<S.firstUniqChar(s)<<endl;
    
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