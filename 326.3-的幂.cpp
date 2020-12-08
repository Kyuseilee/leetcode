/*
 * @lc app=leetcode.cn id=326 lang=cpp
 *
 * [326] 3的幂
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n == 0)
            return false;
        while(n > 1){
            if(n % 3 != 0)
                return false;
            n /= 3;
        }
        return n == 1;
    }
};
// @lc code=end

