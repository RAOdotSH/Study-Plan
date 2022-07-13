/*
Problem Name: Remove Linked List Elements
Problem Code: 203
Problem Link: https://leetcode.com/problems/remove-linked-list-elements/
Problem Difficulty: Easy

Problem Statement:  Given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val == val, and return the new head.

Author: RAO.exe
Date: July 12, 2020
Language: C++
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n" 
#define MOD 1000000007

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(!head) return head;
        
        while(head and head->val == val) head = head->next;
        
        ListNode* curr = head;
        ListNode* prev = nullptr;
        
        while(curr){
            if(curr->val == val){
                prev->next = curr->next;
                curr = curr->next;
            }
            else{
                prev = curr;
                curr = curr->next;
            }
        }
        
        return head;
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