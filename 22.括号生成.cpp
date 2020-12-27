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
        s = "(";
        backtracking();
        return res;
    }
    void backtracking(int n){
        if(s.size() == n*2){
            res.push_back(s);
            return ;
        }
    }
};
// @lc code=end

