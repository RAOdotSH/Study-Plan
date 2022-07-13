/*
Problem Name: Linked List Cycle
Problem Code: 141
Problem Link: https://leetcode.com/problems/linked-list-cycle/
Problem Difficulty: Easy

Problem Statement:  Given head, the head of a linked list, determine if the linked list has a cycle in it.
                    There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter.
                    Return true if there is a cycle in the linked list. Otherwise, return false.

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
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head) return false;
        
        ListNode* slow = head;
        ListNode* fast = head->next;
        
        while(true){
            if(!fast || !fast->next) break;
            
            if(slow == fast) return true;
            
            slow = slow->next;
            fast = fast->next->next;
        }
        
        return false;
    }
};

/*    Ignore    */
void solve(){
    // Model Input
    Solution S;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = head->next->next;

    cout<<S.hasCycle(head)<<endl;
    
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