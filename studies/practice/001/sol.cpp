#include <bits/stdc++.h>
using namespace std;

#define fastio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void solve() {
    string text = "a bb ccc dddd eeeee ffff";
    int max_count = 0;
    char max_char;

    int freq[256] = {0};

    for (char c : text) {
        if (c == ' ') continue;

        int temp_count = ++freq[(unsigned char)c];

        if (temp_count > max_count) {
            max_count = temp_count;
            max_char = c;
        }
    }

    cout << max_char << " repeats " << max_count <<" times." << endl;
}

int main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

