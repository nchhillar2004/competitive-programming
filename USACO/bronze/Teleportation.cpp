#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("teleport.in", "r", stdin);
    freopen("teleport.out", "w", stdout);

    int a, b, x, y;
    cin >> a >> b >> x >> y;
    int xa_yb = abs(x-a) + abs(y-b);
    int ya_xb = abs(y-a) + abs(x-b);
    int min_dis = min({abs(b-a), xa_yb, ya_xb});

    cout << min_dis << "\n";
}
