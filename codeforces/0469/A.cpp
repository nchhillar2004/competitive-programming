#include <bits/stdc++.h>
 
using namespace std;

#define ll long long
const char nl = '\n';

// A. I Wanna Be the Guy
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, P;
    cin >> n >> P;

    set<int> s;
    while (P--) {
        int x;
        cin >> x;
        s.insert(x);
    }

    int Q;
    cin >> Q;
    while (Q--) {
        int y;
        cin >> y;
        s.insert(y);
    }

    cout << (s.size()==n ? "I become the guy." : "Oh, my keyboard!")  << nl;

    return 0;
}
