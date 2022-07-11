/*
Problem Name: Search a 2D Matrix
Problem Code: 74
Problem Link: https://leetcode.com/problems/search-a-2d-matrix/
Problem Difficulty: Medium

Problem Statement:  Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

                        - Integers in each row are sorted from left to right.
                        - The first integer of each row is greater than the last integer of the previous row.

Author: RAO.exe
Date: July 10, 2020
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
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty() || matrix[0].empty()) return false;

        int n = matrix.size(), m = matrix[0].size();

        int row = 0, col = m-1;
        while(row < n && col >= 0){
            if(matrix[row][col] == target) return true;
            else if(matrix[row][col] > target) col--;
            else row++;
        }

        return false;
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