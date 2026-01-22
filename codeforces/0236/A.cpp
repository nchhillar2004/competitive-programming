#include <bits/stdc++.h>

using namespace std;

// A. Boy or Girl
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    set<char> st;

    for (char c : s) {
        st.emplace(c);
    }

    if (st.size()%2==0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
}
