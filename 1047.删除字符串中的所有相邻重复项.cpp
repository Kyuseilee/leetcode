/*
 * @lc app=leetcode.cn id=1047 lang=cpp
 *
 * [1047] 删除字符串中的所有相邻重复项
 */

// @lc code=start
class Solution {
public:
    string removeDuplicates(string S) {
        stack<char>stk;
        stk.push(S[0]);
        for(int i = 1; i < S.size(); i++){
            if(stk.empty() or S[i] != stk.top())
                stk.push(S[i]);
            else if(stk.top() == S[i])
            {
                stk.pop();
            }
        }
        string res = "";
        while(!stk.empty()){
            res += stk.top();
            stk.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
// @lc code=end

