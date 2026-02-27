#include <bits/stdc++.h>

using namespace std;
const char nl = '\n';

// C. Specialty String
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        stack<char> stk;
        while (N--) {
            char c;
            cin >> c;

            if(stk.size()!=0 && stk.top()==c) stk.pop();
            else stk.push(c);
        }

        cout << (stk.size()>0 ? "NO" : "YES") << nl;
    }

    return 0;
}
