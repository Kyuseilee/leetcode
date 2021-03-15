/*
 * @lc app=leetcode.cn id=139 lang=cpp
 *
 * [139] 单词拆分
 */

// @lc code=start
class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        s = "catsandog";
        vector<string>wD = {"cats", "dog", "sand", "and", "cat"};
        vector<bool>dp(s.size()+1, false);
        dp[0] =true;
        for(int i = 1; i <= s.size(); i++)
        {
            for(int j = 0; j < i; j++)
            {
                string word = s.substr(j, i-j);
                if(find(wD.begin(), wD.end(), word) != wD.end() and dp[j])
                    dp[i] = true;
            }
        }
        for(auto num: dp)
        {
            cout << num << " ";
        }
        return dp[s.size()];
    }
};
// @lc code=end

