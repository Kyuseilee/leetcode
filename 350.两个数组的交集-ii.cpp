/*
 * @lc app=leetcode.cn id=350 lang=cpp
 *
 * [350] 两个数组的交集 II
 */

// @lc code=start
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int>com;
        vector<int> res;
        if(nums1.size() > nums2.size()){
            swap(nums1, nums2);
        }
        for(auto num : nums1){
            com[num] += 1;
        }
        for(auto num : nums2){
            if(com[num]){
                res.push_back(num);
                com[num] -=1;
            }
        }
        return res;
    }
};
// @lc code=end

