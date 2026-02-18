#include <bits/stdc++.h>
#include <cctype>

using namespace std;

const char nl = '\n';

// A. cAPS lOCK
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    bool flag = true;

    for (size_t i = 1; i < s.size(); i++) {
        if(isupper(s[i])) flag = true;
        else {
            flag = false;
            break;
        }
    }

    if (flag) {
        for (size_t i = 0; i < s.size(); i++)
            s[i] = islower(s[i]) ? toupper(s[i]) : tolower(s[i]);
    }

    cout << s << nl;

    return 0;
}
