/*
Problem Name: Valid Parentheses
Problem Code: 20
Problem Link: https://leetcode.com/problems/valid-parentheses/
Problem Difficulty: Easy

Problem Statement:  Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
                    An input string is valid if:
                        - Open brackets must be closed by the same type of brackets.
                        - Open brackets must be closed in the correct order.

Author: RAO.exe
Date: July 14, 2020
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
    bool isValid(string s) {
        stack<char> st;

        for(auto c : s){
            if( c == '(' or c == '[' or c == '{' ) st.push(c);
            else{
                if(st.empty()) return false;

                char top = st.top();

                if( (top == '(' and c == ')') or (top == '[' and c == ']') or (top == '{' and c == '}') ) st.pop();
                else return false;
            }

        }

        return st.empty();
    }
};

/*    Ignore    */
void solve(){
    Solution S;
    string s = "()"; // Model Input
    
    bool ans = S.isValid(s);

    cout<<ans<<endl;

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