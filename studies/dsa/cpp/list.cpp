#include <bits/stdc++.h>
using namespace std;

// List - container, dynamic, similar to vector
int main() {
    list<int> ls;

    // same as vector
    ls.emplace_back(30);

    // list allows to add element in front without insert
    // faster than 'insert'
    ls.push_front(20);
    ls.emplace_front(10);

    for (auto l: ls) {
        cout << l << " ";
    }

    // ls - {10, 20, 30}

    // rest all functions are same as vector
    // begin, push_back, end, clear, insert, size, swap
}
