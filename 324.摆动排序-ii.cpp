/*
 * @lc app=leetcode.cn id=324 lang=cpp
 *
 * [324] 摆动排序 II
 */

// @lc code=start
class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> tmp;
        int left = nums.size()/2, right = left+1;
        while(left >= 0){
            tmp.push_back(nums[left]);
            if(right < nums.size())
                tmp.push_back(nums[right]);
            left--;
            right++;
        }
        nums = tmp;
        return;

    }
};
// @lc code=end

