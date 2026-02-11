#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

const char nl = '\n';

/* B. Vanya and Lanterns
 sort lantern positions, find the biggest gap between neighbors
 answer is max( edge gaps , half of the biggest middle gap )
 edge gaps is distance from 0 to first lantern (v[0])
 and from l (length of street) to last lantern (v[n-1]), i.e l - v[n-1]
*/
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, l;
    cin >> n >> l;

    vector<int> v(n);

    for (int i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end());

    int last = v[0], maxDiff = 0;
    for (int i = 1; i < n; i++) {
        maxDiff = max(maxDiff, v[i] - last);
        last = v[i];
    }

    double s = (double)max(v[0], l-v[n-1]), maxd = (double)maxDiff;

    cout << fixed << setprecision(6) << max(s, maxd/2) << nl;

    return 0;
}
