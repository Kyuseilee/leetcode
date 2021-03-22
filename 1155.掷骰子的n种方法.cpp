/*
 * @lc app=leetcode.cn id=1155 lang=cpp
 *
 * [1155] 掷骰子的N种方法
 */

// @lc code=start
class Solution {
public:
    int numRollsToTarget(int d, int f, int target) {
        if(target < d or target > f*d)
            return 0;
        if(d == 1)
            return 1;
        int mod = 1e9+7;
        vector<int>dp(target, 0);
        for(int k = 0; k < min(f, target); k++){
            dp[k] = 1;
        }
        for(int i = 1; i < d; i++){
            for(int j = min((i+1)*f, target)-1; j>= i; j--){
                dp[j] = 0;
                for(int t = max(i-1, j-f); t < min(j, i*f); t++){
                    dp[j] += dp[t];
                    dp[j] = dp[j]%mod;
                }
            }
        }
        return dp[target-1];
        
    }
};
// @lc code=end

