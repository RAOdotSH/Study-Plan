/*
Problem Name: Valid Sudoku
Problem Code: 36
Problem Link: https://leetcode.com/problems/valid-sudoku/
Problem Difficulty: Medium

Problem Statement:  Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:

                        - Each row must contain the digits 1-9 without repetition.
                        - Each column must contain the digits 1-9 without repetition.
                        - Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.

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
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<int>> row(9, vector<int>(9, 0));
        vector<vector<int>> col(9, vector<int>(9, 0));
        vector<vector<int>> box(9, vector<int>(9, 0));
        
        for(int i = 0; i<9; i++){
            for(int j = 0; j<9; j++){
                if(board[i][j] == '.') continue;

                int num = board[i][j] - '1';

                int box_id = (i/3)*3 + j/3;
                
                row[i][num]++;
                col[j][num]++;
                box[box_id][num]++;
                
                if(row[i][num] > 1 || col[j][num] > 1 || box[box_id][num] > 1) return false;
            }
        }
        return true;
    }
};

/*    Ignore    */
void solve(){
    Solution s;
    vector<vector<char>> board = {
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    }; // Model Input

    bool res = s.isValidSudoku(board); // Model Output

    cout<<res<<endl;
    
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