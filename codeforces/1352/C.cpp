#include <iostream>

using namespace std;
#define ll long long
const char nl = '\n';

// C. K-th Not Divisible by n
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        ll n, k;
        cin >> n >> k;

        ll div = k / (n-1);
        ll rem = k % (n-1);
        ll ans = n * div + rem;
        if (rem == 0) ans--;
        cout << ans << nl;
    }

    return 0;
}
/* n=3 k=7
 1 2 3 4 5 6  7  8  9...
 1 2 4 5 7 8 10 11 12...
 skip = n-1 => 2
 k/(n-1) tells how many multiples of n are skipped
 */
