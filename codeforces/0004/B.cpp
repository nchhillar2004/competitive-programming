#include <iostream>
#include <vector>

using namespace std;

// B. Before an Exam
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int d, sumTime, minSum = 0, maxSum = 0;
    cin >> d >> sumTime;
    vector<pair<int, int>> v(d);

    for (int i = 0; i < d; i++) {
        cin >> v[i].first;
        cin >> v[i].second;
        minSum += v[i].first;
        maxSum += v[i].second;
    }

    if (sumTime > maxSum || sumTime < minSum) cout << "NO" << "\n";
    else{
        vector<int> sol(d);
        cout << "YES" << "\n";
        for (int i = 0; i < d; i++) {
            sol[i] = v[i].first;
            v[i].second -= v[i].first;
            sumTime -= v[i].first;
        }
        if (sumTime > 0) {
            for (int i = 0; i < d; i++) {
                if (sumTime <= 0) break;
                if (sumTime >= v[i].second) {
                    sol[i] += v[i].second;
                    sumTime -= v[i].second;
                    if (sumTime == 0) break;
                } else {
                    sol[i] += v[i].second - sumTime;
                    sumTime -= v[i].second;
                }
            }
        }
        for (int n : sol) cout << n << " ";
    }

    return 0;
}
