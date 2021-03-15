/*
 * @lc app=leetcode.cn id=464 lang=cpp
 *
 * [464] 我能赢吗
 */

// @lc code=start
class Solution {
public:
    bool canIWin(int maxChoosableInteger, int desiredTotal) {
        if (maxChoosableInteger >= desiredTotal)
            return true;
        if (desiredTotal - maxChoosableInteger <= maxChoosableInteger || (maxChoosableInteger*(maxChoosableInteger+1)/2 < desiredTotal))
            return false;
        


    }
};
// @lc code=end

