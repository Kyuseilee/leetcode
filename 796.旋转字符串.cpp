/*
 * @lc app=leetcode.cn id=796 lang=cpp
 *
 * [796] 旋转字符串
 */

// @lc code=start
class Solution {
public:
    bool rotateString(string A, string B) {
        if(A == B)
            return true;
        return A.size() == B.size() and (A+A).find(B) != (A+A).npos;
    }
};
// @lc code=end

