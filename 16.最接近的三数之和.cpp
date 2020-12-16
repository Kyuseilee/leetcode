/*
 * @lc app=leetcode.cn id=16 lang=cpp
 *
 * [16] 最接近的三数之和
 */

// @lc code=start
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int min_dis = INT_MAX;
        int min_var = INT_MAX;
        for(int i = 0; i < nums.size()-1; i++)
        {
            if(i > 0 and nums[i] == nums[i-1])
                continue;
            int left = i+1;
            int right = nums.size() - 1;

            while(left < right){
                int goal = nums[i] + nums[left] + nums[right];
                if(goal == target)
                    return goal;
                else if(goal > target)
                {
                    if(abs(goal - target) < min_var)
                    {
                        min_dis = goal;
                        min_var = abs(goal - target);
                    }
                    right--;
                }
                else{
                    if(abs(goal - target) < min_var)
                    {
                        min_dis = goal;
                        min_var = abs(goal - target);
                    }
                    left++;
                }
            }
        }
        return min_dis;

    }
};
// @lc code=end

