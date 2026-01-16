#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr);

// optimal solution
int main(){
    fastio();
    
    ll n;
    cin >> n;

    ll total_sum = n * (n+1)/2;
    ll current_sum = 0;

    for (int i = 0; i < n-1; i++) {
        ll x;
        cin >> x;
        current_sum += x;
    }

    cout << total_sum - current_sum;
}
