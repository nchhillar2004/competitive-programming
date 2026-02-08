#include <iostream>

using namespace std;

// B. Drinks
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    long double sum = 0, res = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        sum += x;
    }

    res = (sum / (n*100)) * 100;

    cout << res << "\n";

    return 0;
}
