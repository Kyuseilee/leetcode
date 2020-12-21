/*
 * @lc app=leetcode.cn id=457 lang=cpp
 *
 * [457] 环形数组循环
 */

// @lc code=start
class Solution {
public:
    bool circularArrayLoop(vector<int>& nums) {
        if (nums.size() < 2)
            return false;
        int n = nums.size();
        for(int i = 0; i < nums.size(); i++){
            int index = nums[i];
            int flag = -1;
            if(flag < 0)
                int flag = 1;
            vector<int> res(nums.size(),0);
            while(!res[i]){
                if(flag){
                    index += n;
                }
                else if(index >= n){
                    index -= n;
                }
                int cur = nums[index];
                if(cur * flag < 0){
                    break;
                }
                res[index] = cur;
                index += cur;
            }
            if(res[i])
                return true;
        }
        return false;
    }
};
// @lc code=end

