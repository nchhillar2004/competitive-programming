#include <bits/stdc++.h>

using namespace std;

#define ll long long

const char nl  = '\n';

// A. Friendly Numbers
int digitSum(ll n) {
    int sum = 0;

    while (n > 0) {
        sum += n%10;
        n /= 10;
    }

    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    while (N--) {
        ll x;
        cin >> x;

        int count = 0;
        for (ll y = x+1; y <= x+90; y++) {
            if (x == y - digitSum(y)) count++;
        }

        cout << count << nl;
    }

    return 0;
}
