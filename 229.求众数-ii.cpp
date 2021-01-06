/*
 * @lc app=leetcode.cn id=229 lang=cpp
 *
 * [229] 求众数 II
 */

// @lc code=start
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count = 0;
        vector<int> res;
        int cur = nums[0];
        int length = nums.size() /3;
        for(auto num:nums){
            if(num == cur)
                count++;
            else{
                if(count > length)
                {
                    res.push_back(cur);
                }
                count = 1;
                cur = num;
            }
        }
        if(count > length)
            res.push_back(cur);
        return res;

    }
};
// @lc code=end

