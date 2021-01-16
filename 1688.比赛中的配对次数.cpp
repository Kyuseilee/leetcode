/*
 * @lc app=leetcode.cn id=1688 lang=cpp
 *
 * [1688] 比赛中的配对次数
 */

// @lc code=start
class Solution {
public:
    int numberOfMatches(int n) {
        int count = 0;
        while(n > 1)
        {
            if(n % 2 == 1)
                count += n/2 +1;
            else 
                count += n/2;
            n /= 2;
        }
        return count;
    }
};
// @lc code=end

