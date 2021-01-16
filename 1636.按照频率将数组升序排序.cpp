/*
 * @lc app=leetcode.cn id=1636 lang=cpp
 *
 * [1636] 按照频率将数组升序排序
 */

// @lc code=start
class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> cnt;
        for (auto n : nums) {
            cnt[n]++;
        }
        sort(nums.begin(), nums.end(), [&cnt](int a, int b) {
            return (cnt[a] == cnt[b]) ? a > b : cnt[a] < cnt[b];
        });
        return nums;
    }
};
// @lc code=end

