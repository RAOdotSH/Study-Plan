/*
Problem Name: Reshape the Matrix
Problem Code: 566
Problem Link: https://leetcode.com/problems/reshape-the-matrix/
Problem Difficulty: Easy

Problem Statement:  You are given an m x n matrix mat and two integers r and c representing the number of rows and the number of columns of the wanted reshaped matrix.
                    The reshaped matrix should be filled with all the elements of the original matrix in the same row-traversing order as they were.
                    If the reshape operation with given parameters is possible and legal, output the new reshaped matrix; Otherwise, output the original matrix

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
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n = mat.size(), m = mat[0].size();

        if(n*m != r*c) return mat;

        int total = n*m;
        vector<vector<int>> res(r, vector<int>(c));

        int i = 0, j = 0, I = 0, J = 0;
        while(total--){
            res[I][J] = mat[i][j];

            J++, j++;

            if(j == m) j = 0, i++;

            if(J == c) J = 0, I++;

            if(I == r-1 && J == c-1) break;
        }

        return res;
    }
};

/*    Ignore    */
void solve(){
    Solution s;
    vector<vector<int>> mat = {{1,2},{3,4}}; // Model Input
    int r = 4, c = 4; // Model Input

    vector<vector<int>> res = s.matrixReshape(mat, r, c); // Model Output

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