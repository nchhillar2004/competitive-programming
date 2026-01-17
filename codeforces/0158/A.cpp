#include <bits/stdc++.h>

using namespace std;

#define ll long long

// A. Next Round
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    int count = 0;
    int kth_score = 0;

    for (int i=1; i <= n; i++) {
        int score;
        cin >> score;
        if (score>=1){
            if (i<k) count++;
            if (i==k) kth_score = score;
            if (score==kth_score) count++;
        } else break;
    }

    cout << count;
}
