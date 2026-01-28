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

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int N, count[5] = {0};
    cin >> N;

    while (N--) {
        int x;
        cin >> x;
        count[x] += 1;
    }
    
    int total = count[4] + count[3] + count[2] / 2;
    count[1] -= count[3];

    if (count[2] % 2 == 1) {
        total += 1;
        count[1] -= 2;
    }
    if (count[1] > 0) total += (count[1] + 3) / 4;

    cout << total << nl;

    return 0;
}