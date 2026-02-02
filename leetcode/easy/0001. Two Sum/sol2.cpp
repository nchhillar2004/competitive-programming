#include <bits/stdc++.h>
using namespace std;

// Optimal solution
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> mp;
    mp.reserve(nums.size());

    for (int i = 0; i < nums.size(); ++i) {
        int need = target - nums[i];
        auto it = mp.find(need);
        if (it != mp.end())
            return {it->second, i};
        mp[nums[i]] = i;
    }
    return {};
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    for (int n : twoSum(nums, target)) cout << n << "\n";
    return 0;
}
