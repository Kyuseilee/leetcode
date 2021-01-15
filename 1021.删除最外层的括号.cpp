/*
 * @lc app=leetcode.cn id=1021 lang=cpp
 *
 * [1021] 删除最外层的括号
 */

// @lc code=start
class Solution {
public:
    string removeOuterParentheses(string S) {
        string s = "(";
        int count = 1;
        for(int i = 1; i < S.size(); i++){

            if(S[i] == ')')
                count--;
            else
                count++;
            if(count == 0)
        }

    }
};
// @lc code=end

