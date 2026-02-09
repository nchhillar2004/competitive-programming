#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s, hello = "hello";
    cin >> s;
    size_t start_s = 0, start_h = 0;
    
    while(start_s < s.size() && start_h < 5) {
        for (size_t i = start_s; i < s.size(); i++) {
            if (s[i] != hello[start_h]) {
                start_s += 1;
            } else {
                start_h += 1;
                start_s += 1;
            }
        }
    }

    cout << (start_h==5 ? "YES" : "NO") << "\n";

    return 0;
}
