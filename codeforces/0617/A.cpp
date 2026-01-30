#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int cord;
    cin >> cord;

    int n = cord / 5;

    cout << (cord>n*5 ? n+1 : n) << "\n";

    return 0;
}
