#include <bits/stdc++.h>

using namespace std;

/*
USACO 2020 December Contest, Bronze
Problem 1. Do You Know Your ABCs? 
*/

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    multiset<int> ms;

    for (int i = 0; i < 7; i++) {
        int n;
        cin >> n;
        ms.emplace(n);
    }

    int a, b, c;
    auto it = ms.begin();
    a = *(it);
    advance(it, 1);
    b = *(it);

    auto it2 = ms.end();
    it2--;
    int largest = *(it2);

    c = largest - (a+b);

    cout << a << " " << b << " " << c;
}
