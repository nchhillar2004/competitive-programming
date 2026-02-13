#include <bits/stdc++.h>

using namespace std;

#define ll long long
const char nl = '\n';

// A. Even Odds
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;

    ll odd = n - (n/2), res = 0;
    
    if (k <= odd) res = (2 * k) - 1;
    else res = 2 * (k - odd);

    cout << res << nl;

    return 0;
}
