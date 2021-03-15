/*
 * @lc app=leetcode.cn id=650 lang=cpp
 *
 * [650] 只有两个键的键盘
 */

// @lc code=start
class Solution {
public:
    int minSteps(int n) {
        if(n < 2)
            return 0;
        vector<int>dp(n+1, n+1);
        dp[0] = 0;
        dp[1] = 0;
        for(int i = 2; i <= n; i++){
            for(int j = 1; j *2 <= i; j++){
                if(i%j == 0)
                    dp[i] = min(dp[i], dp[j]+i/j);
            }
        }
        return dp[n];
    }
};
// @lc code=end

