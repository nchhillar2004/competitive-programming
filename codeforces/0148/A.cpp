#include <iostream>

const char nl = '\n';

// A. Insomnia cure
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int k, l, m, n, d;
    std::cin >> k >> l >> m >> n >> d;

    int damaged = 0;

    for (int i = 1; i <= d; i++)
        if (i%k==0 || i%l==0 || i%m==0 || i%n==0) damaged++;

    std::cout << damaged << nl;

    return 0;
}
