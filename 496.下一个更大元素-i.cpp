/*
 * @lc app=leetcode.cn id=496 lang=cpp
 *
 * [496] 下一个更大元素 I
 */

// @lc code=start
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_map<int, int> com;
        stack<int> stk;
        for(int i = 0; i< nums2.size(); i++){
            while(!stk.empty() and stk.top() < nums2[i]){
                com[stk.top()] = nums2[i];
                stk.pop();
            }
            stk.push(nums2[i]);
        }
        for(int i = 0; i < nums1.size(); i++){
            if(com[nums1[i]])
                res.push_back(com[nums1[i]]);
            else
                res.push_back(-1);
        }
        return res;
    }
};
// @lc code=end

