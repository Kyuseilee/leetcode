/*
 * @lc app=leetcode.cn id=688 lang=cpp
 *
 * [688] “马”在棋盘上的概率
 */

// @lc code=start
class Solution {
public:
    double knightProbability(int N, int K, int r, int c) {
        vector<vector<vector<long long>>>dp(N+4, vector<vector<long long>>(N+4, vector<int>(K+1, 0)));
        for(int i = 0; i <= N+3; i++){
            for(int j = 0; j <= N+3; j++){
                if(i >= 2 && i <= N+1){
                    if(j >= 2 && j <= N+1){
                        dp[i][j][0] = 1;
                    }
                }
                else
            }
        }
        for(int k = 1; k <= K; k++){
            for(int i = 1; i <= N+1; i++){
                for(int j = 1; j <= N+1; j++){
                    dp[]
                }
            }
        }

    }
};
// @lc code=end

