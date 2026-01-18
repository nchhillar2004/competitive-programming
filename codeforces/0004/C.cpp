#include <bits/stdc++.h>

using namespace std;

#define ll long long

// C. Registration System
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    unordered_set<string> us;
    map<string, int> str_count;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (!us.count(s)) {
            us.emplace(s);
            str_count.emplace(s, 0);
            cout << "OK" << "\n";
        }
        else {
            auto it = str_count.find(s);
            int dig = it->second;
            str_count[s] = dig + 1;
            s += to_string(dig + 1);
            us.emplace(s);
            cout << s << "\n";
        }
    }
}
