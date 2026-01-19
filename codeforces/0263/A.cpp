#include <bits/stdc++.h>
using namespace std;

// A. Beautiful Matrix
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    pair<int, int> position;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int x;
            cin >> x;
            if (x==1) {
                position = {i, j};
                break;
            }
        }
    }

    int count = abs(2 - position.first) + abs(2 - position.second);
    cout << count;
}
