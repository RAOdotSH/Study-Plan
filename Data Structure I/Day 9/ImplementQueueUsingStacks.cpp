/*
Problem Name: Implement Queue using Stacks
Problem Code: 232
Problem Link: https://leetcode.com/problems/implement-queue-using-stacks/
Problem Difficulty: Easy

Problem Statement:  Implement a first in first out (FIFO) queue using only two stacks.
                    The implemented queue should support all the functions of a normal queue (push, peek, pop, and empty).
                    Implement the MyQueue class:
                        - void push(int x) Pushes element x to the back of the queue.
                        - int pop() Removes the element from the front of the queue and returns it.
                        - int peek() Returns the element at the front of the queue.
                        - boolean empty() Returns true if the queue is empty, false otherwise.

Author: RAO.exe
Date: July 14, 2020
Language: C++
*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define endl "\n" 
#define MOD 1000000007

class MyQueue {
    stack<int> St1, St2;

public:
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!St2.empty()){
            St1.push(St2.top());
            St2.pop();
        }

        St1.push(x);

        while(!St1.empty()){
            St2.push(St1.top());
            St1.pop();
        }
    }
    
    int pop() {
        int ans = St2.top();
        St2.pop();
        return ans;
    }
    
    int peek() {
        return St2.top();
    }
    
    bool empty() {
        return St2.empty();
    }
};

/*    Ignore    */
void solve(){
    MyQueue Q;

    Q.push(1);
    Q.push(2);
    Q.push(3);

    cout<<Q.peek()<<endl;
    cout<<Q.pop()<<endl;
    cout<<Q.pop()<<endl;
    cout<<Q.pop()<<endl;
    cout<<Q.empty()<<endl;
    
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