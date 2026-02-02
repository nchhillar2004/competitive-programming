#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int n, r=0;
    cin >> n;

    string s;
    cin >> s;

    char pc = '\O';

    for (char c : s) {
        if (pc && pc==c) r+=1;
        pc = c;
    }

    cout << r <<  "\n";

    return 0;
}
