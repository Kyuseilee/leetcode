/*
 * @lc app=leetcode.cn id=22 lang=cpp
 *
 * [22] 括号生成
 */

// @lc code=start
class Solution {
public:
    vector<string> res;
    string s;
    vector<string> generateParenthesis(int n) {
        res.clear();
        s += "(";
        helper(n, 1, 0);
        return res;
    }
    void helper(int n, int countleft, int countright)
    {
        if(s.size() == 2*n)
        {
            res.push_back(s);
            return ;
        }
        if(countleft < n)
        {
            s += "(";
            helper(n, countleft +1, countright);
            s.pop_back();
        }
        if(countright < n)
        {
            if(countright+1 > countleft)
                return ;
            s += ")";
            helper(n, countleft, countright+1);
            s.pop_back();
        }
    }
};
// @lc code=end

