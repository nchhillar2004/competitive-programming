#include <bits/stdc++.h>
 
using namespace std;

#define ll long long
const char nl = '\n';

// A. Is your horseshoe on the other hoof?
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int dup = 0;
    vector<int> v;
    for (int i = 0; i < 4; i++){
        int x;
        cin >> x;
        for (int n : v) {
            if (n==x) {
                dup+=1;
                break;
            }
        }
        v.push_back(x);
    }

    cout << dup << nl;

    return 0;
}
