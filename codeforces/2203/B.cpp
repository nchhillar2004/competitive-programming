#include <algorithm>
#include <bits/stdc++.h>
#include <string>

using namespace std;

#define ll long long
const char nl = '\n';

// B. Beautiful Numbers
int solve() {
    string s;
    cin >> s;

    vector<int> v;
    int sum = 0;
    for (size_t i = 0; i < s.length(); i++){
        sum += s[i] - '0';
        if (i == 0) v.push_back(s[i] - '1');
        else v.push_back(s[i] - '0');
    }
    
    if (sum <= 9) return 0;

    sort(v.rbegin(), v.rend());
    
    int moves = 0;
    for (int i : v) {
        sum -= i;
        moves++;
        if (sum <= 9) {
            return moves;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) cout << solve() << nl;
    return 0;
}
