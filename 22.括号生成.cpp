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
        backtracking(s,1, 1, 2*n);
        return res;
    }
    void backtracking(string s, int left,int right, int goal){
        if(s.size() == goal){
            res.push_back(s);
            return ;
        }
        if(count(s.begin(), s.end(), '(') < goal / 2){
            s += "(";
            right++;
            backtracking(s,left, right,goal);
        }
        if(right){
            s += ")";
            right--;
            backtracking(s,left,right,goal);
        }
    }
};
// @lc code=end

