/*
Problem Name: Merge Two Sorted Lists
Problem Code: 21
Problem Link: https://leetcode.com/problems/merge-two-sorted-lists/
Problem Difficulty: Easy

Problem Statement:  You are given the heads of two sorted linked lists list1 and list2.
                    Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.
                    Return the head of the merged linked list.

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

/*    Solution    */
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode();
        ListNode* curr = ans;
        
        while(list1 && list2){
            if(list1->val > list2->val){
                curr->next = list2;
                list2 = list2->next;
            }
            else{
                curr->next = list1;
                list1 = list1->next;
            }
            
            curr = curr->next;
        }
        
        curr->next = list1 ? list1 : list2;
        
        return ans->next;
    }
};

/*    Ignore    */
void solve(){
    Solution S;
    // Model Input
    ListNode* list1 = new ListNode(1);
    list1->next = new ListNode(2);
    list1->next->next = new ListNode(4);

    ListNode* list2 = new ListNode(1);
    list2->next = new ListNode(3);
    list2->next->next = new ListNode(4);

    ListNode* ans = S.mergeTwoLists(list1, list2);

    while(ans){
        cout<<ans->val<<" ";
        ans = ans->next;
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