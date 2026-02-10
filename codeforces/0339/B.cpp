#include <cstdlib>
#include <iostream>

using namespace std;

#define ll long long

// B. Xenia and Ringroad
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, M;
    cin >> n >> M;
    ll last = 1, dist = 0;

    while (M--) {
        ll x;
        cin >> x;
        if (last != x) {
            if (last > x) 
                dist += n - abs(x-last);
            else
                dist += abs(x-last);
            last = x;
        }
    }

    cout << dist << "\n";

    return 0;
}
