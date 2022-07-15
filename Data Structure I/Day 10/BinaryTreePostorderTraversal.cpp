/*
Problem Name: Binary Tree Postorder Traversal
Problem Code: 145
Problem Link: https://leetcode.com/problems/binary-tree-postorder-traversal/
Problem Difficulty: Easy

Problem Statement:  Given the root of a binary tree, return the inorder traversal of its nodes' values.

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
    vector<int> postorderTraversal(TreeNode* root) {
        if(!root) return {};

        vector<int> postOrder;

        vector<int> left = postorderTraversal(root->left);
        vector<int> right = postorderTraversal(root->right);

        postOrder.insert(postOrder.end(), left.begin(), left.end());
        postOrder.insert(postOrder.end(), right.begin(), right.end());
        postOrder.push_back(root->val);

        return postOrder;
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

    vector<int> ans = S.postorderTraversal(root);
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