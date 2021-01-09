/*
 * @lc app=leetcode.cn id=45 lang=cpp
 *
 * [45] 跳跃游戏 II
 */

// @lc code=start
class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int rightmost = 0;
        int pace = 0;
        int min_pace = 0;
        for(int i = 0; i < nums.size()-1; i++){
            if(i <= rightmost){
                rightmost = max(rightmost, i + nums[i]);
                if(rightmost >= n-1)
                    return pace;
                else{
                    int tmp = rightmost;
                    min_pace = pace;
                    while()
                }
                pace += 1;
            }
        }
        return false;
    }
};
// @lc code=end

