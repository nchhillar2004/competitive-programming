#include <bits/stdc++.h>

using namespace std;

#define ll long long

bool binarySearch(ll arr[], ll x, size_t sz) {
    int low = 0, high = sz-1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x) return true;
        else if (x > arr[mid]) low = mid + 1;
        else high = mid - 1;
    }

    return false;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    
    int N, K;
    cin >> N >> K;
    size_t sz = N;

    ll arr[N];
    
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        arr[i] = a;
    }
    
    while (K--) {
        int x;
        cin >> x;
        cout << (binarySearch(arr, x, sz) ? "YES" : "NO") << "\n";
    }
    
    return 0;
}
