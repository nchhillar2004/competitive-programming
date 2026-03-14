#include <iostream>

const char nl = '\n';

// A. Hit the Lottery
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    long long n;
    std::cin >> n;

    std::cout << n/100 + (n%100)/20 + (n%20)/10 + (n%10)/5 + n%5;

    return 0;
}
