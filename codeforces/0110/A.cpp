#include <iostream>

#define ll long long

// A. Nearly Lucky Number
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ll n, lucky = 0;
    std::cin >> n;

    std::string s = std::to_string(n);

    for (char c : s) {
        if (c == '4' || c == '7') {
            lucky++;
        } else continue;
    }

    std::cout << (lucky==7 || lucky==4 ? "YES" : "NO") << "\n";

    return 0;
}
