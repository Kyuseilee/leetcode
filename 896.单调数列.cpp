/*
 * @lc app=leetcode.cn id=896 lang=cpp
 *
 * [896] 单调数列
 */

// @lc code=start
class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        vector<int> tmp1 = A;
        sort(A.begin(), A.end());
        if(A == tmp1)
            return true;
        else{
            sort(A.rbegin(), A.rend());
            if(A == tmp1)
                return true;
        }
        return false;
    }
};
// @lc code=end

