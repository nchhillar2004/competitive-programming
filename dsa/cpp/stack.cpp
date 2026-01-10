#include <bits/stdc++.h>
using namespace std;

// Stack - LIFO (last in first out), O(1)
int main() {
    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2, 1}
    st.push(3); // {3, 2, 1}
    st.push(4); // {4, 3, 2, 1}
    st.emplace(5); // {5, 4, 3, 2, 1}
    
    cout << st.top() << endl; // 5

    st.pop(); // {4, 3, 2, 1}
    cout << st.top() << endl; // top element: 4
    cout << st.size() << endl; // size: 4
    
    cout << st.empty() << endl; // '0' OR 'false', because stack is not empty
}
