#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

using pii = pair<int, int>;
using pl = pair<ll, ll>;
using pd = pair<ld, ld>;

using vi = vector<int>;
using vl = vector<ll>;
using vd = vector<ld>;

#define pb push_back
#define eb emplace_back
#define lb lower_bound
#define ub upper_bound
#define ins insert
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()

const char nl = '\n';
const int INF = 1e9;
const ll INFL = 4e18;

// A. Brogramming Contest
void solve() {
    int N; cin >> N;
    string s, t; cin >> s;

    int mov = 0;

    int pos1 = s.find_first_of('1');
    int pos0 = t.find_first_of('0');

    while (pos1 >= 0 || pos0 >= 0) {
        pos1 = s.find_first_of('1');
        pos0 = t.find_first_of('0');
        if (pos1 >= 0) {
            t += s.substr(pos1, sz(s));
            s.erase(pos1, sz(s));
            mov += 1;
            continue;
        }
        if (pos0 >= 0) {
            s += t.substr(pos0, sz(t));
            t.erase(pos0, sz(t));
            mov += 1;
            continue;
        }
    }

    cout << mov << nl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

#ifdef LOCAL
    freopen("1.in", "r", stdin);
#endif

    int T = 1;
    cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}
