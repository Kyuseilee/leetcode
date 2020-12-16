/*
 * @lc app=leetcode.cn id=15 lang=cpp
 *
 * [15] 三数之和
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>>res;
        if(nums.size() < 3)
            return {};
        for(int start = 0; start < nums.size(); start++){
            if(nums[start] > 0)
                return res;
            
            if(start > 0 and nums[start] == nums[start-1])
                continue;
            
            int left = start +1;
            int right = nums.size() -1;
            while(left < right){
                if(nums[start] + nums[left] + nums[right] > 0)
                    right--;
                else if(nums[start] + nums[right] + nums[left] < 0) 
                    left++;
                else{
                    res.push_back({nums[start], nums[left], nums[right]});
                while(right > left and nums[right] == nums[right-1]) right--;
                while(right > left and nums[left] == nums[left+1]) left++;
                right--;
                left++;
                }
            }
        }
        return res;


    }
};
// @lc code=end

