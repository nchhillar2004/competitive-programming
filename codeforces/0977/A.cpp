#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int n, K;
    cin >> n >> K;

    while (K--) {
        if (n%10==0) n/=10;
        else n-=1;
    }

    cout << n << "\n";

    return 0;
}
