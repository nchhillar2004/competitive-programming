#include <iostream>
#include <vector>

using namespace std;

const char nl = '\n';

// B. Books
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long t;
    cin >> n >> t;

    vector<long long> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    long long sum = 0;
    int left = 0;
    int maxBooks = 0;

    for (int right = 0; right < n; right++) {
        sum += v[right];

        while (sum > t) {
            sum -= v[left];
            left++;
        }

        maxBooks = max(maxBooks, right - left + 1);
    }

    cout << maxBooks << nl;

    return 0;
}
