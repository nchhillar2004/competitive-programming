#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    set<ll> st;

    while (n--) {
        ll num;
        cin >> num;
        st.emplace(num);
    }

    cout << st.size();
}
