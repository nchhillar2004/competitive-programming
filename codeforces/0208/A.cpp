#include <bits/stdc++.h>

using namespace std;

const char nl = '\n';

// A. Dubstep
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    string result = "";

    for (size_t i = 0; i < s.length();) {
        if (i + 2 < s.length() && s.substr(i, 3) == "WUB") {
            if (!result.empty() && result.back() != ' ')
                result += ' ';
            i += 3;
        } else {
            result += s[i];
            i++;
        }
    }

    if (!result.empty() && result.back() == ' ')
        result.pop_back();

    cout << result << nl;

    return 0;
}
