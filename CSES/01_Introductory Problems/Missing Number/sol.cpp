#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    unordered_set<int> us(n-1);

    for (int i = 0; i < n-1; i++) {
        int x;
        cin >> x;
        us.insert(x);
    }

    for (int i = 1; i <= n; i++) {
        if (!us.count(i)) cout << i;
    }
}
