/*
 * @lc app=leetcode.cn id=719 lang=cpp
 *
 * [719] 找出第 k 小的距离对
 */

// @lc code=start
class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        vector<int>res;
        res.clear();
        unordered_map<int, vector<int>>used;
        for(int i = 0; i < nums.size(); i++){
            for(int j  =i+1; j < nums.size(); j++){
                if(used[nums[j]])
                    
                res.push_back(abs(nums[j] - nums[i]));
            }
        }
        sort(res.begin(), res.end());
        return res[k-1];
    }
};
// @lc code=end

