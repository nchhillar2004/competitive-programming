#include <bits/stdc++.h>

using namespace std;

//A. Petya and Strings
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    cin >> a >> b;

    for (size_t i = 0; i < a.size(); i++) {
        if (isupper(static_cast<unsigned char>(a[i]))) a[i] = (char)tolower(a[i]);
        if (isupper(static_cast<unsigned char>(b[i]))) b[i] = (char)tolower(b[i]);

        if (a[i]>b[i]) {
            cout << "1";
            exit(0);
        } else if (a[i]<b[i]) {
            cout << "-1";
            exit(0);
        } else continue;
    }

    cout << "0";
}
