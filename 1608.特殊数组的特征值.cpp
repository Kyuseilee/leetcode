/*
 * @lc app=leetcode.cn id=1608 lang=cpp
 *
 * [1608] 特殊数组的特征值
 */

// @lc code=start
class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int start = 0;
        while(start <= nums.size()){
            int count = 0;
            for(int i = 0; i < nums.size(); i++){
                if(count > start)
                    break;
                else if(nums[i] >= start)
                    count++;
            }
            if(start == count)
                return start;
            start++;
        }
        return -1;
    }
};
// @lc code=end

