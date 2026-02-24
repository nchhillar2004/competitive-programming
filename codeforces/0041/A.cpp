#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

const char nl = '\n';

// A. Translation
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string be, bi;
    cin >> be >> bi;
    reverse(bi.begin(), bi.end());

    if (bi == be) cout << "YES" << nl;
    else cout << "NO" << nl;

    return 0;
}
