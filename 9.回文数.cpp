/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0 or (x%10 == 0 and x != 0))
            return false;
        int revertNumber = 0;
        while(x > revertNumber){
            revertNumber = revertNumber*10 + x%10;
            x /= 10;
        }
        return x == revertNumber or x == revertNumber/10;

    }
};
// @lc code=end

