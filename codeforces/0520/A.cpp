#include <iostream>

// A. Pangram
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::string s;
    std::cin >> n >> s;

    bool seen[26] = {false};

    for (char c : s) {
        c = tolower(c);
        seen[c-'a'] = true;
    }

    for (int i = 0; i < 26; i++) {
        if (!seen[i]) {
            std::cout << "NO";
            return 0;
        }
    }

    std::cout << "YES";
    return 0;
}
