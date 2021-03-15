/*
 * @lc app=leetcode.cn id=983 lang=cpp
 *
 * [983] 最低票价
 */

// @lc code=start
class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n = days.size();
        vector<int>dp(days[n-1]+1, 0);
        int idx = 0;
        for(int i = 1; i <= days[n-1]; i++){
            if(i == days[idx]){
                int a = i-7, b = i-30;
                if(a < 0) a = 0;
                if(b < 0) b = 0;
                dp[i] = min(min(dp[i-1]+costs[0], dp[a]+costs[1]), dp[b]+costs[2]);
                idx++;
            }
            else{
                dp[i] = dp[i-1];
            }
        }
        for(auto num : dp){
            cout << num << " ";
        }
        return dp[days[n-1]];

    }
};
// @lc code=end

