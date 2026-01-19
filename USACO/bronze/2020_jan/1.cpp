#include <bits/stdc++.h>

using namespace std;

/* 
USACO 2020 January Contest, Bronze
Problem 1. Word Processor
*/

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("word.in", "r", stdin);
    freopen("word.out", "w", stdout);

    int n, k;
    cin >> n >> k;

    vector<string> v;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        v.emplace_back(s);
    }

    int i = 0;
    while (i < n){
        bool first = true;
        size_t rc = k;
        while (rc>=v[i].size() && i < n) {
            if (first) {
                cout << v[i];
                first = false;
            } else cout << " " << v[i];
            rc -= v[i].size();
            i+=1;
        }
        cout << "\n";
    }
}
