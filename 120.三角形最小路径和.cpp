/*
 * @lc app=leetcode.cn id=120 lang=cpp
 *
 * [120] 三角形最小路径和
 */

// @lc code=start
class Solution {
public:
    int minimumTotal(vector<vector<int>>& t) {
        int rows = t.size();
        vector<int>dp;
        for(auto ch : t[rows-1])
        {
            dp.push_back(ch);
        }
        cout << "\n";
        for(int i = rows-2; i >= 0; i--)
        {
            for(int j = 0; j < t[i].size(); j++)
                dp[j] = min(dp[j], dp[j+1]) + t[i][j];
        }
        int min_val = INT_MAX;
        for(auto num : dp)
        {
            min_val = min(num, min_val);
        }
        return dp[0];
    }
};
// @lc code=end

