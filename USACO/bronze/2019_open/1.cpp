#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("buckets.in", "r", stdin);
    freopen("buckets.out", "w", stdout);

    //   row  col
    pair<int, int> barn;
    pair<int, int> rock;
    pair<int, int> lake;

    for (int r = 1; r <= 10; r++) {
        for (int c = 1; c <= 10; c++) {
            char s;
            cin >> s;
            if (s == 'B') barn = {r, c};
            else if (s == 'R') rock = {r, c};
            else if (s == 'L') lake = {r, c};
        }
    }

    int distance = abs(barn.first - lake.first) + abs(barn.second - lake.second) - 1;

    if (barn.first == lake.first && rock.first == barn.first
        && ((rock.second < lake.second && rock.second > barn.second)
        || (rock.second > lake.second && rock.second < barn.second))) {
        distance += 2;
    }
    else if (barn.second == lake.second && rock.second == barn.second
        && ((rock.first < lake.first && rock.first > barn.first)
        || (rock.first > lake.first && rock.first < barn.first))) {
        distance += 2;
    }

    cout << distance << "\n";

    return 0;
}
