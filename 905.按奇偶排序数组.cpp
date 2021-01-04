/*
 * @lc app=leetcode.cn id=905 lang=cpp
 *
 * [905] 按奇偶排序数组
 */

// @lc code=start
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> res;
        stack<int> stk;
        for(auto num : A){
            if(num % 2 == 0)
                res.push_back(num);
            else
            {
                stk.push(num);
            }
        }
        while(!stk.empty()){
            res.push_back(stk.top());
            stk.pop();
        }
        return res;
    }
};
// @lc code=end

