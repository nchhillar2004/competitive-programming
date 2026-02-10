#include <iostream>

using namespace std;

// B. Queue at the School
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, T;
    cin >> n >> T;

    string s;
    cin >> s;

    while (T--) {
        for (int i = 0; i < n; i++) {
            if ((i < n-1) && s[i]=='B' && s[i+1] == 'G') {
                s[i] = 'G';
                s[i+1] = 'B';
                i += 1;
            }
        }
    }

    cout << s << "\n";

    return 0;
}
