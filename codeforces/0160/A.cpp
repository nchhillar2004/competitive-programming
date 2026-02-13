#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

#define ll long long
const char nl = '\n';

// A. Twins
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    float sum = 0;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
    }

    sort(v.begin(), v.end());
    int s = 0, count = 0;
    for (int i = n-1; i >= 0; i--) {
        s += v[i];
        count += 1;
        if (s > sum/2) break;
    }

    cout << count << nl;

    return 0;
}
