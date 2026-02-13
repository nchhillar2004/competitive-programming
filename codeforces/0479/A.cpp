#include <bits/stdc++.h>

using namespace std;

#define ll long long
const char nl = '\n';

// A. Expression
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;

    int res = max(a+b+c, max((a+b)*c, max(a*(b+c), max(a*b*c, max(a+(b*c), (a*b)+c)))));

    cout << res << nl;

    return 0;
}
/* Possible expressions:
 a+b+c
 (a+b)*c
 a*(b+c)
 a*b*c
 a+(b*c)
 (a*b)+c
*/
