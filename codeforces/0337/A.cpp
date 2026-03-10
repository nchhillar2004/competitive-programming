#include <iostream>
#include <vector>
#include <algorithm>

const int INF = 1e9;
const char nl = '\n';

// A. Puzzles
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, m;
    std::cin >> n >> m;

    std::vector<int> v(m);
    for (int i = 0; i < m; i++)
        std::cin >> v[i];
    
    std::sort(v.begin(), v.end());

    int diff = INF;
    for (int i = 0; i <= m-n; i++) {
        int smallest = v[i], largest = v[(i+n)-1];
        if (largest-smallest < diff) diff = largest-smallest;
    }

    std::cout << diff << nl;

    return 0;
}
