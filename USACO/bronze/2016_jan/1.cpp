#include <bits/stdc++.h>

using namespace std;

/* 
USACO 2016 January Contest, Bronze
Problem 1. Promotion Counting
*/

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("promote.in", "r", stdin);
    freopen("promote.out", "w", stdout);

    vector<pair<int, int>> vp;

    for (int i=0; i < 4; i++) {
        int before, after;
        cin >> before >> after;
        vp.emplace_back(before, after);
    }

    int plat = vp[3].second - vp[3].first;

    int gold = (vp[2].second - vp[2].first) + plat;

    int silver = (vp[1].second - vp[1].first) + gold;

    cout << silver << "\n" << gold << "\n" << plat;
}
