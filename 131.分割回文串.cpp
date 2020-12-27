/*
 * @lc app=leetcode.cn id=131 lang=cpp
 *
 * [131] 分割回文串
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>>res;
    vector<string> tmp;
    vector<vector<string>> partition(string s) {
        res.clear();
        tmp.clear();
        vector<bool>used(s.size(), false);
        for(int i = 0; i < s.size(); i++){
            backtracking(i,"", s, used);

        }
        return res;
    }

    void backtracking(int pos,string cur, string s, vector<bool>&used){
        if(pos == s.size())
        {
            tmp.push_back(cur);
            res.push_back(tmp);
            return ;
        }
        while(pos != s.size()){
            if(pos > 0 and s[pos] == s[pos-1] and used[pos-1] == false)
            {
                break;
            }
            if(cur+s[pos] == s[pos] + cur){
                cur = cur+s[pos];
            }
            else{
                tmp.push_back(cur);
                cur = s[pos];
            }
            used[pos] = true;
            backtracking(pos+1, cur, s, used);
            tmp.pop_back();
            pos++;
            used[pos] = false;
        }
    }
};
// @lc code=end

