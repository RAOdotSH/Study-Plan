/*
Problem Name: Binary Tree Preorder Traversal
Problem Code: 144
Problem Link: https://leetcode.com/problems/binary-tree-preorder-traversal/
Problem Difficulty: Easy

Problem Statement:  Given the root of a binary tree, return the preorder traversal of its nodes' values.

Author: RAO.exe
Date: July 15, 2020
Language: C++
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n" 
#define MOD 1000000007

/*    Solution    */
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        if(!root) return {};

        vector<int> preOrder;
        preOrder.push_back(root->val);

        vector<int> left = preorderTraversal(root->left);
        vector<int> right = preorderTraversal(root->right);

        preOrder.insert(preOrder.end(), left.begin(), left.end());
        preOrder.insert(preOrder.end(), right.begin(), right.end());

        return preOrder;
    }
};

/*    Ignore    */
void solve(){
    // Model Inpput
    Solution S;

    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    vector<int> ans = S.preorderTraversal(root);
    for(auto i : ans) cout<<i<<" ";
    cout<<endl;
    
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