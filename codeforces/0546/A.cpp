#include <bits/stdc++.h>

using namespace std;

// A. Soldier and Bananas
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, n, w;
    cin >> k >> n >> w;
    int price = 0;

    for (int i = 1; i <= w; i++) {
        price += i*k;
    }

    if (price<=n) cout << 0;
    else cout << price-n;
}
