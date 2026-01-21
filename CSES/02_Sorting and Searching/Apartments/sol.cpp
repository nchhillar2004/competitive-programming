#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m, k;
    cin >> n >> m >> k;

    multiset<ll> ma;
    multiset<ll> mb;

    while (n--) {
        ll a;
        cin >> a;
        ma.emplace(a);
    }
    while (m--) {
        ll b;
        cin >> b;
        mb.emplace(b);
    }
    
    int count = 0;

    for (ll x : ma) {
        auto it = mb.lower_bound(x-k);

        if (it != mb.end() && *it <= x+k) {
            count++;
            mb.erase(it);
        }
    }

    cout << count;
}
