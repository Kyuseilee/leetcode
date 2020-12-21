/*
 * @lc app=leetcode.cn id=532 lang=cpp
 *
 * [532] 数组中的 k-diff 数对
 */

// @lc code=start
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int count = 0;
        for(int i = 0; i <nums.size()-1; i++){
            if(i > 0 and nums[i] == nums[i-1])
                continue;
            for(int j = i+1; j < nums.size(); j++){
                if(j > i+1 and nums[j] == nums[j-1])
                    continue;
                if(abs(nums[j] - nums[i]) == k)
                {
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};
// @lc code=end

