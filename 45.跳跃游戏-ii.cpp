/*
 * @lc app=leetcode.cn id=45 lang=cpp
 *
 * [45] 跳跃游戏 II
 */

// @lc code=start
class Solution {
public:
    int jump(vector<int>& nums) {
        int start = 0;
        int maxPos = 0;
        int n = nums.size();
        int end = 0;
        int step = 0;
        for(int i = 0; i < n-1; i++)
        {
            if(maxPos >= i)
            {
                maxPos = max(maxPos, i+nums[i]);
                if(i == end)
                {
                    end = maxPos;
                    step++;
                }
            }
        }
        return step;
    }
};
// @lc code=end

