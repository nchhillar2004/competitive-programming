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

void solve() {
    string s, result, vowels = "aeiouy";
    cin >> s;
    
    for (char c : s) {
        if (isupper(c)) c = tolower(c);
        if (vowels.find(c) != string::npos) continue;
        else {
            result += '.';
            result += c;
        }
    }

    cout << result << nl;
    return;
}

// A. String Task
int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    
    solve();

    return 0;
}
