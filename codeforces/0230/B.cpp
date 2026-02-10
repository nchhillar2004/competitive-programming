#include <cmath>
#include <iostream>

using namespace std;

#define ll long long

// B. T-primes
bool isPrime(ll n) {
    if (n == 2 || n == 3) return true;
    else if (n<=1 || (n>3 && n%2 == 0)) return false;
    else {
        for (int i = 3; i <= sqrt(n); i++) {
            if (n % i == 0) return false;
        }
    }

    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    while (N--) {
        ll x;
        cin >> x;
        if(sqrt(x) != static_cast<int>(sqrt(x))) cout << "NO" << "\n";
        else cout << (isPrime(sqrt(x)) ? "YES" : "NO") << "\n";
    }

    return 0;
}
