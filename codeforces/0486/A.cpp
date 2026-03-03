#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
 
const char nl = '\n';

// A. Calculating Function
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    ll n;
    cin >> n;
 
    ll odd = n%2==0 ? n/2 : (n/2)+1, odd_sq = odd*odd;
    __int128 sum = (__int128)n*(n+1)/2 - 2*odd_sq;
 
    cout << (ll)sum << nl;
 
    return 0;
}
