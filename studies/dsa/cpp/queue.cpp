#include <bits/stdc++.h>
using namespace std;

// Queue - FIFO (first in first out), O(1)
int main() {
    queue<int> q;
    q.push(1); // {1}
    q.push(2); // {1, 2}
    q.push(3); // {1, 2, 3}
    q.emplace(4); // {1, 2, 3, 4}
    
    cout << q.front() << endl; // 1
    cout << q.back() << endl; // 4
    
    q.pop(); // {2, 3, 4}
    cout << q.front() << endl; // 2
}
