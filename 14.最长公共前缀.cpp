/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())
            return "";
        string res = strs[0];
        for(int i = 1; i < strs.size(); i++){
            if(strs[i].size() < res.size())
                res = strs[i];
        }
        string result = "";
        for(int i = 0; i < strs.size(); i++)
        {
            int n = res.size();
            while(n>0){
                if(res[n-1] != strs[i][n-1])
                {
                    res.pop_back();
                    n = res.size();
                }
                else
                {
                    n--;
                }
            }
        }
        return res;

    }
};
// @lc code=end

