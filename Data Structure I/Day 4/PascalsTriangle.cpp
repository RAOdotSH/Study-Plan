/*
Problem Name: Pascal's Triangle
Problem Code: 118
Problem Link: https://leetcode.com/problems/pascals-triangle/
Problem Difficulty: Easy

Problem Statement:  Given an integer numRows, return the first numRows of Pascal's triangle.
                    In Pascal's triangle, each number is the sum of the two numbers directly above

Author: RAO.exe
Date: July 09, 2020
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
    vector<vector<int>> generate(int numRows) {
        if(numRows == 1) return {{1}};

        vector<vector<int>> res = generate(numRows-1);
        
        vector<int> row(res.back().size()+1, 0);

        for(int i = 0; i<res.back().size() + 1; i++){
            if(i == 0) row[i] = 1;
            else if(i == res.back().size() ) row [i] = 1;
            else row[i] = res.back()[i-1] + res.back()[i];
        }

        res.push_back(row);

        return res;
    }
};

/*    Ignore    */
void solve(){
    Solution s;
    int numRows = 5; // Model Input

    vector<vector<int>> res = s.generate(numRows); // Model Output

    for(auto row : res){
        for(auto ele : row) cout<<ele<<" ";
        cout<<endl;
    }  
    
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