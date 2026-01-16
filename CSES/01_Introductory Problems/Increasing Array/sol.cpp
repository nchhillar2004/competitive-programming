#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    ll moves = 0;
    vector<ll> v;

    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        v.emplace_back(x);
    }

    for (int j = 0; j < n-1; j++) {
        ll prev = v[j];
        ll nxt = v[j+1];
        if (nxt<prev) {
            v[j+1] = v[j];
            moves += prev-nxt;
        }
    }

    cout << moves;
}
