/*
Problem Name: Reverse Linked List
Problem Code: 206
Problem Link: https://leetcode.com/problems/reverse-linked-list/
Problem Difficulty: Easy

Problem Statement:  Given the head of a singly linked list, reverse the list, and return the reversed list.

Author: RAO.exe
Date: July 13, 2020
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
    ListNode* reverseList(ListNode* head) {
        if(!head) return head;

        ListNode* curr = head;
        ListNode* prev = nullptr;

        while(curr){
            ListNode* next = curr->next;

            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }
};

void solve(){
    // Model Input
    Solution s;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = new ListNode(6);

    ListNode* res = s.reverseList(head);

    while(res){
        cout<<res->val<<" ";
        res = res->next;
    }
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