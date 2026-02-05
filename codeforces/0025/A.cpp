#include <iostream>

// A. IQ Test
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int N;
    std::cin >> N;
    int ec = 0, oc = 0;
    int ei = 1, oi = 1, i = 1;

    while (N--) {
        if (ec > 0 && oc > 0 && (ec+oc > 2)) break;
        int x;
        std::cin >> x;
        if (x%2 == 0) {
            ec++; 
            ei = i;
        }
        else {
            oc++; 
            oi = i;
        }
        i+=1;
    }

    std::cout << (ec == 1 ? ei : oi) << "\n";

    return 0;
}
