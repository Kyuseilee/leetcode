/*
 * @lc app=leetcode.cn id=448 lang=cpp
 *
 * [448] 找到所有数组中消失的数字
 */

// @lc code=start
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int, int> compare;
        vector<int> res;
        for(int i = 0; i< nums.size(); i++){
            compare[nums[i]] += 1;
        }
        for(int i = 1; i < nums.size()+1; i++){
            if(!compare[i])
                res.push_back(i);
        }
        return res;
        //----------------Way 2 
        vector<int> res;
        if(nums.empty())
            return nums;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            nums[(nums[i]-1) % n] += n;
        }
        for(int i = 0; i < n; i++){
            if(nums[i] <= n)
                res.push_back(i+1);
        }
        return res;
        

    }
};
// @lc code=end

