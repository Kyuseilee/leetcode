/*
 * @lc app=leetcode.cn id=228 lang=cpp
 *
 * [228] 汇总区间
 */

// @lc code=start
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> res;
        if(nums.empty())
            return {};
        string s = to_string(nums[0]);
        int count = 1;
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] +1 != nums[i+1])
            {
                if(count == 1)
                {
                    res.push_back(s);
                    s = to_string(nums[i+1]);
                    count = 1;
                }
                else{
                    s += "->" + to_string(nums[i]);
                    res.push_back(s);
                    s = to_string(nums[i+1]);
                    count = 1;
                }
            }
            else
            count++;
        }
        if(s == to_string(nums[nums.size() -1]))
        {
            res.push_back(s);
        }
        else{
            s += "->" + to_string(nums[nums.size() -1]);
            res.push_back(s);
        }
        return res;

    }
};
// @lc code=end

