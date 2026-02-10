#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

// A. Dragons
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> d(n);

    for (int i = 0; i < n; i++) {
        cin >> d[i].first;
        cin >> d[i].second;
    }

    sort(d.begin(), d.end());
    
    bool win = true;
    while (d.size() > 0) {
        if (s > d[0].first) {
            s += d[0].second;
            d.erase(d.begin());
        } else {
            win = false;
            break;
        }
    }

    cout << (win ? "YES" : "NO") << "\n";

    return 0;
}
