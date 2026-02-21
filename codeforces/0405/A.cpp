#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

const char nl = '\n';

// A. Gravity Flip
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    for (int a : arr) 
        cout << a << " ";

    return 0;
}
