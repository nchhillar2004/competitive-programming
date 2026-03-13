#include <iostream>

const char nl = '\n';

// A. Sum
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N;
    std::cin >> N;

    while (N--) {
        int a, b ,c;
        std::cin >> a >> b >> c;

        if (a+b==c || a+c==b || b+c==a) std::cout << "YES" << nl;
        else std::cout << "NO" << nl;
    }

    return 0;
}
