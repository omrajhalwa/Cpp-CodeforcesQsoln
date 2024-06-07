#include<bits/stdc++.h>
using namespace std;

int main(){

int arr[6] = { 10, 2, 4, 8, 6, 9 };
 
    // defining priority queue
    priority_queue<int> pq;
  priority_queue<int, vector<int>, greater<int> > g;
    // printing array
    cout << "Array: ";
    for (auto i : arr) {
        cout << i << ' ';
    }
    cout << endl;
    // pushing array sequentially one by one
    for (int i = 0; i < 6; i++) {
        pq.push(arr[i]);
    }
 
    // printing priority queue
    cout << "Priority Queue: ";
    while (!pq.empty()) {
        cout << pq.top() << ' ';
        g.push(pq.top());
        pq.pop();
    }

 //priority_queue<int, vector<int>, greater<int> > g;
    while (!g.empty()) {
        cout << ' ' << g.top();
        g.pop();
    }



}