#include <bits/stdc++.h>
 
using namespace std;

#define ll long long
const char nl = '\n';

// A. Divisibility Problem
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        ll a, b;
        cin >> a >> b;

        cout << (a%b==0 ? 0 : (((a/b)+1)*b) - a) << nl; 
    }

    return 0;
}
