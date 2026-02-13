#include <bits/stdc++.h>

using namespace std;

#define ll long long
const char nl = '\n';

// A. Lucky Division
bool isLucky(int n) {
    while (n > 0) {
        int digit = n % 10;
        
        if (digit != 4 && digit != 7) return false;
        
        n /= 10;
    }

    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num;
    cin >> num;

    for (int i = 4; i <= num; i++) {
        if (isLucky(i) && num % i == 0) {
            cout << "YES" << nl;
            return 0;
        }
    }

    cout << "NO" << nl;

    return 0;
}
