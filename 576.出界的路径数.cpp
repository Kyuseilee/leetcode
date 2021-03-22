/*
 * @lc app=leetcode.cn id=576 lang=cpp
 *
 * [576] 出界的路径数
 */

// @lc code=start
class Solution {
public:
    int count = 0;
    vector<vector<int>>visited;
    int findPaths(int m, int n, int N, int a, int b) {
        int M = 1000000007;
        if(N == 0)
            return 0;
        vector<vector<vector<long long>>>dp(m+2, vector<vector<long long>>(n+2, vector<long long>(N+1, 0)));
        for(int i = 0; i <= m+1; i++){
            dp[i][0][0] = 1;
            dp[i][n+1][0] = 1;
        }
        for(int j = 0; j <= n+1; j++){
            dp[0][j][0] = 1;
            dp[m+1][j][0] = 1;
        }
        for(int k = 1; k <= N; k++){
            for(int i = 1; i <= m; i++){
                for(int j = 1; j <= n; j++){
                    dp[i][j][k] = (dp[i-1][j][k-1] + dp[i+1][j][k-1])%M + (dp[i][j-1][k-1] + dp[i][j+1][k-1])%M;
                }
            }
        }
        int sum = 0;
        for(int k = 1; k <= N; k++){
            sum = (sum + dp[a+1][b+1][k])%M;

        }
        return sum;
    }
};
// @lc code=end

