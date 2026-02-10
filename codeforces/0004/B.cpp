#include <iostream>
#include <vector>

using namespace std;

// B. Before an Exam
// Time Complexity: O(d)
// no nested loops, each loop runs 'd' times, i.e the input
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // d = total days he studied
    // sumTime = total hours studies in d days
    int d, sumTime, minSum = 0, maxSum = 0;
    cin >> d >> sumTime;
    vector<pair<int, int>> v(d);

    for (int i = 0; i < d; i++) {
        cin >> v[i].first; // min hours he can study on the day i
        cin >> v[i].second; // max hours he can study on the day i
        minSum += v[i].first; // minimum hrs he has to study
        maxSum += v[i].second; // max hrs he can study
    }

    // check if he studied more or less than the time possible
    if (sumTime > maxSum || sumTime < minSum) cout << "NO" << "\n";
    else{
        // we'll store the hrs he studied each day in 'sol', for 'd' days
        vector<int> sol(d);
        cout << "YES" << "\n";

        // Loop1: iterate through the minimum required time to study each day
        // i.e. v[i].first
        // and subtract it from sumTime (total time)
        // also subract it from v[i].second (i.e. the maximum time) to get the remaining maximum time
        for (int i = 0; i < d; i++) {
            sol[i] = v[i].first;
            v[i].second -= v[i].first;
            sumTime -= v[i].first;
        }
        // now we have studied the minimum time required to study for each day. 1 to d
        // now if still 'total time > 0' then:
        if (sumTime > 0) {
            // Loop2: iterate through the remaining maximum time, i.e v[i].second
            // to complete the sumTime, because the remaining sumTime is greater than 0
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
        // Loop3: print the solution, how many hrs studied, each day
        for (int n : sol) cout << n << " ";
    }

    return 0;
}
