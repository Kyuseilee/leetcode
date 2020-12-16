/*
 * @lc app=leetcode.cn id=18 lang=cpp
 *
 * [18] 四数之和
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        if(nums.size() < 4)
            return {};
        for(int i = 0; i < nums.size() - 2; i++){
            if(i > 0 and nums[i] == nums[i-1])
                continue;
            int sum = target - nums[i];
            for(int j = i+1; j < nums.size() -1; j++){
                if(j > i+1 and nums[j] == nums[j-1])
                    continue;
                int left = j+1,right =nums.size() -1; 
                while(left < right){
                    if(nums[j] + nums[left] + nums[right] == sum){
                        res.push_back({nums[i], nums[j], nums[left], nums[right]});
                        while(left < right and nums[left+1] == nums[left])
                        left++;
                        while(left < right and nums[right-1] == nums[right])
                        right--;
                        left++;
                        right--; 
                    }
                    else if(nums[j] + nums[left] + nums[right]< sum){
                        left++;
                    }
                    else{
                        right--;
                    }
                }
            }
        }
        return res;

    }
};
// @lc code=end

