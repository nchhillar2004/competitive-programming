#include <bits/stdc++.h>

using namespace std;

// A. Word
int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int up = 0, lo = 0;

    for (char c : s) {
        if (isupper(c)) up+=1;
        else lo+=1;
    }

    if (up>lo) transform(s.begin(), s.end(), s.begin(), ::toupper);
    else transform(s.begin(), s.end(), s.begin(), ::tolower);

    cout << s << "\n";

    return 0;
}
