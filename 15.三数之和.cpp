/*
 * @lc app=leetcode.cn id=15 lang=cpp
 *
 * [15] 三数之和
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int> tmp;
        if(nums.size() < 3)
            return {};
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size()-2; i++){
            if(nums[i] > 0)
                return res;
            if(i != 0 and nums[i] == nums[i-1])
                continue;
            tmp.push_back(nums[i]);
            for(int j = i+1; j < nums.size()-1; j++){
                tmp.push_back(nums[j]);
                for(int k = j+1; k <nums.size(); k++)
                {
                    if(nums[i] + nums[j] + nums[k] == 0)
                    {
                        tmp.push_back(nums[k]);
                        res.push_back(tmp);
                        tmp.pop_back();
                    }
                }
                tmp.pop_back();
            }
            tmp.pop_back();
        }
        return res;
    }
};
// @lc code=end

