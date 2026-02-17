#include <bits/stdc++.h>

using namespace std;

const char nl = '\n';

// A. Cheap Travel
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, a, b;
    cin >> n >> m >> a >> b;

    if (a <= (double)b/m) cout << n*a << nl;
    else if (n%m==0) cout << (n/m)*b << nl;
    else {
        int rem = n%m;
        if (a*rem > b)
            cout << ((n/m)*b) + b << nl;
        else
            cout << ((n/m)*b) + (a*rem) << nl;
    }

    return 0;
}
