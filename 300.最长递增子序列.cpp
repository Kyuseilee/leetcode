/*
 * @lc app=leetcode.cn id=300 lang=cpp
 *
 * [300] 最长递增子序列
 */

// @lc code=start
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>dp(nums.size(), 1);
        dp[0] = 1;
        vector<int>d(nums.size()+1, 0);
        int len = 1;
        d[len] = nums[0];
        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i] > d[len])
            {
                len++;
                d[len] = nums[i];
            }
            else
            {
                int l = 1, r = len, pos = 0;
                while(l <= r){
                    int mid = (l+r) >>1;
                    if(d[mid] <nums[i]){
                        pos = mid;
                        l = mid + 1;
                    }
                    else {
                        r = mid - 1;
                    }
                }
                d[pos+1] = nums[i];
            }
        }
        return len;

    }
};
// @lc code=end

