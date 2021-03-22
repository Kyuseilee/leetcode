/*
 * @lc app=leetcode.cn id=801 lang=cpp
 *
 * [801] 使序列递增的最小交换次数
 */

// @lc code=start
class Solution {
public:
    int minSwap(vector<int>& A, vector<int>& B) {
        vector<vector<int>>dp(A.size(), vector<int>(2, 0));
        dp[0][0] = 0;
        dp[0][1] = 1;
        for(int i = 1; i < A.size(); i++){
            if(A[i-1] < A[i] && B[i-1] < B[i]){
                if(A[i-1] < B[i] && B[i-1] < A[i]){
                    dp[i][0] = min(dp[i-1][0], dp[i-1][1]);
                    dp[i][1] = min(dp[i-1][0], dp[i-1][1]) +1;
                }
                else{
                    dp[i][0] = dp[i-1][0];
                    dp[i][1] = dp[i-1][1] +1;
                }
            }
            else{
                dp[i][0] = dp[i-1][1];
                dp[i][1] = dp[i-1][0] +1;
            }
        }
        return min(dp[A.size()-1][0], dp[A.size()-1][1]);
    }
};
// @lc code=end

