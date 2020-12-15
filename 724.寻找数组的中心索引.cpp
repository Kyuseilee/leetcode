/*
 * @lc app=leetcode.cn id=724 lang=cpp
 *
 * [724] 寻找数组的中心索引
 */

// @lc code=start
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalsum = 0;
        for(auto num : nums)
            totalsum += num;
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            totalsum -= nums[i];
            cout << sum << " " <<totalsum << "\n";
            if(sum == totalsum)
                return i;
            sum += nums[i];
        }
        return -1;

    }
};
// @lc code=end

