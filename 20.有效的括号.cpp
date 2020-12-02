/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        stk.push(s[0]);
        for(int i = 1; i < s.size(); i++){
            if(s[i] == ')'){
                if(stk.empty() or stk.top() != '(')
                    return false;
                else
                {
                    stk.pop();
                }
            }
            else if(s[i] == ']'){
                if(stk.empty() or stk.top() != '[')
                    return false;
                else
                {
                    stk.pop();
                }
            }
            else if(s[i] == '}'){
                if(stk.empty() or stk.top() != '{')
                    return false;
                else
                {
                    stk.pop();
                }
            }
            else
            {
                stk.push(s[i]);
            }
        }
        if(stk.empty())
            return true;
        return false;
    }
};
// @lc code=end

