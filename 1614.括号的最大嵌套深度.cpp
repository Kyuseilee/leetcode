/*
 * @lc app=leetcode.cn id=1614 lang=cpp
 *
 * [1614] 括号的最大嵌套深度
 */

// @lc code=start
class Solution {
public:
    int maxDepth(string s) {
        int start = 0;
        int max_depth = 0;
        int count = 0;
        while(start <s.size())
        {
            if(s[start] == '(')
                count++;
            else if(s[start] == ')'){
                max_depth = max(max_depth, count);
                count--;
            }
            start++;
        }
        return max(max_depth, count);
    }
};
// @lc code=end

