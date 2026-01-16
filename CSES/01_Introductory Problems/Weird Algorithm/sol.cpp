#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fastio();
    ll n;
    cin >> n;
    cout << n;

    while (n!=1) {
        if (n%2==0) n /= 2;
        else n = (n*3) + 1;
        cout << " " << n;
    }
    return 0;
}
