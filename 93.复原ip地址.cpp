/*
 * @lc app=leetcode.cn id=93 lang=cpp
 *
 * [93] 复原IP地址
 */

// @lc code=start
class Solution {
public:
    vector<string> res;
    string tmp;
    vector<string> restoreIpAddresses(string s) {
        res.clear();
        tmp.clear();
        if(s.size() < 4 or s.size() > 12)
            return {};
        backtracking(0, s);
        return res;
    }
    void backtracking(int pointer, string s){
        if(pointer == s.size())
        {
            res.push_back(tmp);
            return;
        }
        while(pointer < s.size()){
            tmp += s[pointer];
            if(pointer % 3 == 2)
                tmp += '.';
            backtracking(pointer+1, s);
            pointer++;
            tmp = "";
        }

    }
};
// @lc code=end

