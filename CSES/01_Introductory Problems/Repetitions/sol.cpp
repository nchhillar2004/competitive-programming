#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int max_streak = 1;
    int current_streak = 1;

    for (size_t i = 1; i < s.length(); i++) {
        if (s[i] == s[i-1]) {
            current_streak++;
        } else {
            max_streak = max(max_streak, current_streak);
            current_streak = 1;
        }
    }

    max_streak = max(max_streak, current_streak);

    cout << max_streak;
    return 0;
}
