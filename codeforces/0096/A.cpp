#include <iostream>

using namespace std;

// A. Football
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    
    int found = 1;
    char last = s[0];
    for (size_t i = 1; i < s.size(); i++) {
        if (found >= 7) break;
        if (s[i] == last) found += 1;
        else {
            found = 1; 
            last = s[i];
        }
    }

    cout << (found>=7 ? "YES" : "NO") << "\n";

    return 0;
}
