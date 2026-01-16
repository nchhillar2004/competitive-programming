#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int value = 0;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s[1] == '+') value++;
        else value--;
    }

    cout << value;
}
