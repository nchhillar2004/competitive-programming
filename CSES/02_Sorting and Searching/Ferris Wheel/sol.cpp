#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(0);
    std::cin.tie(nullptr);

    int n, w;
    std::cin >> n >> w;

    std::vector<int> v(n);
    for (int i = 0; i < n; i++) 
        std::cin >> v[i];

    std::sort(v.begin(), v.end());

    int i = 0, j = n-1;
    int count = 0;

    while (i <= j) {
        if (v[i] + v[j] <= w) {
            i++;
            j--;
        } else j--;
        count++;
    }

    std::cout << count << "\n";

    return 0;
}
