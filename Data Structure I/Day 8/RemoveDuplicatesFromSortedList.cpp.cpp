/*
Problem Name: Remove Duplicates from Sorted List
Problem Code: 83
Problem Link: https://leetcode.com/problems/remove-duplicates-from-sorted-list/
Problem Difficulty: Easy

Problem Statement:  Given the head of a sorted linked list, delete all duplicates such that each element appears only once.
                    Return the linked list sorted as well.

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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return head;

        ListNode* curr = head;
        ListNode* prev = nullptr;

        while(curr){
            if(prev and prev->val == curr->val){
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

void solve(){
    // Model Input
    Solution s;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(1);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(3);

    ListNode* res = s.deleteDuplicates(head);

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