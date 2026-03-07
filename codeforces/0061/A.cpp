#include <bits/stdc++.h>
 
using namespace std;

#define ll long long
const char nl = '\n';

// A. Ultra-Fast Mathematician
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    cin >> a >> b;

    for (size_t i = 0; i < a.length(); i++) {
        if (a[i] ^ b[i]) cout << 1;
        else cout << 0;
    }

    return 0;
}
