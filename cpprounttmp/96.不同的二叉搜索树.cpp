/*
 * @lc app=leetcode.cn id=96 lang=cpp
 *
 * [96] 不同的二叉搜索树
 */

// @lc code=start
class Solution {
public:
    int numTrees(int n) {
        if(n < 3)
            return n;
        return  n + numTrees(n-1);

    }
};
// @lc code=end

