#include <bits/stdc++.h>
using namespace std;

// Priority Queue - Stores highest/largest value at top
/* Time complexity
 * push & pop - O(log n)
 * top - O(1)
 * */
int main(){
    priority_queue<int> pq;

    pq.push(5); // {5}
    pq.push(2); // {5, 2}
    pq.push(8); // {8, 5, 2}
    pq.emplace(7); // {8, 7, 5, 2}

    cout << pq.top() << endl; // 8

    pq.pop();

    cout << pq.top() << endl; // 7
    
    // Minimum Heap OR Minimum Priority Queue
    priority_queue<int, vector<int>, greater<int>> mpq;
    mpq.push(5); // {5}
    mpq.push(2); // {2, 5}
    mpq.push(8); // {2, 5, 8}

    cout << mpq.top(); // 2
}
