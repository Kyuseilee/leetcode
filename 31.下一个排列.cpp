/*
 * @lc app=leetcode.cn id=31 lang=cpp
 *
 * [31] 下一个排列
 */

// @lc code=start
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(nums.size() < 2)
            return ;
        int slow = 0;
        bool flag = false;
        for(int i = 0; i <nums.size(); i++){
            if(i+1 < nums.size()){
                if(nums[i] < nums[i+1]){
                    slow = i;
                    flag = true;
                }
            }
        }
        if(!flag)
            sort(nums.begin(), nums.end());
        else{
            int cur = slow;
            swap(nums[slow], nums[slow+1]);
            for(int i = cur+1; i < nums.size(); i++){
                if(i +1 < nums.size()){
                    if(nums[i] > nums[i+1])
                        swap(nums[i], nums[i+1]);
                }
            }
        }
        return ;
        
    }
};
// @lc code=end

