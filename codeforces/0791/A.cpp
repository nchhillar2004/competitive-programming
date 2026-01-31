#include <bits/stdc++.h>

using namespace std;

#define ll long long

// A. Bear and Big Brother
int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int a, b, yrs = 0;
    cin >> a >> b;

    while (a <= b) {
        a*=3;
        b*=2;
        yrs+=1;
    }

    cout << yrs << "\n";

    return 0;
}
