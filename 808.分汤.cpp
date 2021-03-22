/*
 * @lc app=leetcode.cn id=808 lang=cpp
 *
 * [808] 分汤
 */

// @lc code=start
class Solution {
public:
    double soupServings(int N) {
        N = N/25 + (N%25 > 0 ? 1 : 0);
        if(N >= 500)
            return 1.0;
        vector<vector<double>>dp(N+1,vector<double>(N+1, 0));
        dp[0][0] = 0.5;
        for(int i = 1; i <= N; i++){
            dp[i][0] = 0;
            dp[0][i] = 1.0;
        }
        vector<vector<int>>trail = {{4,0}, {3,1}, {2,2}, {1,3}};
        int x, y;
        for(int i = 1; i <= N; i++){
            for(int j = 1; j <= N; j++){
                int x, y;
                for(int k = 0; k < 4; k++){
                    x = max(i-trail[k][0], 0);
                    y = max(i-trail[k][1], 0);
                    dp[i][j] += dp[x][y];
                }
                dp[i][j] *= 0.25;
            }
        }
        return dp[N][N];


    }
};
// @lc code=end

