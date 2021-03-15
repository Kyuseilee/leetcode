/*
 * @lc app=leetcode.cn id=474 lang=cpp
 *
 * [474] 一和零
 */

// @lc code=start
class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<int>>dp(n+1, vector<int>(m+1, 0));
        for(int i = 0; i < strs.size(); i++){
            int one = 0, zero = 0;
            for(auto ch : strs[i]){
                if(ch == '1')
                    one++;
                else
                    zero++;
            }
            for(int j = n; j>=one; j--){
                for(int k = m; k >= zero; k--){
                    dp[j][k] = max(dp[j][k], dp[j-one][k-zero]+1);
                }
            }
        }
        return dp[n][m];



        // vector<vector<int>>dp(m+1, vector<int>(n+1, 0));
        // for(int k = 0; k < strs.size(); k++)
        // {
        //     int zero = 0;
        //     int one = 0;
        //     for(auto ch : strs[k])
        //     {
        //         if(ch == '1')
        //             one++;
        //         else zero++;
        //     }
        //     for(int i = m; i >= zero; i--)
        //     {
        //         for(int j = n; j >= one; j--)
        //             dp[i][j] = max(dp[i][j], dp[i-zero][j-one]+1);
        //     }
        // }
        // return dp[m][n];
    }
};
// @lc code=end

