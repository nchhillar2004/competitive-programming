/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       for (int i = 0; i < (int)size(nums)-1; i++) {
        for (int j = i+1; j < (int)size(nums); j++) {
            if (nums[i]+nums[j]==target)
                return {i, j};
        }
       }
       return {};
    }
};
// @lc code=end