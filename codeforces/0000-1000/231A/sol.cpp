#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int count = 0;

    for (int i = 0; i < n; i++) {
        int temp = 0;
        for (int j = 1; j <= 3; j++) {
            int x;
            cin >> x;
            if (x==1) temp++; 
        }
        if (temp>=2) count++;
    }

    cout << count;
}
