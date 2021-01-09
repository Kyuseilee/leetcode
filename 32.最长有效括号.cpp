/*
 * @lc app=leetcode.cn id=32 lang=cpp
 *
 * [32] 最长有效括号
 */

// @lc code=start
class Solution {
public:
    int longestValidParentheses(string s) {
        stack<char> stk;
        int count = 0;
        int max_count = 0;
        int pre = 0;
        for(auto ch : s){
            if(ch == '(')
            {
                if(!stk.empty())
                {
                    pre = count;
                    count = 0;
                }
                stk.push(ch);
            }
            else{
                if(stk.empty())
                {
                    max_count = max(count, max_count);
                    count = 0;
                }
                else{
                    stk.pop();
                    count += 2;
                }
            }
        }
        if(stk.empty())
            count += pre;
        max_count = max(count, max_count);
        return max_count;

    }
};
// @lc code=end

