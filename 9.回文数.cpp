/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) return false;
        int res = 0;
        int compare = x;
        while(x!=0){
            if(res > INT_MAX/10) return 0;
            if(res < INT_MIN/10) return 0;
            res *= 10;
            res = res + x%10;
            x = x/10;
        }
        if (res == compare) return true;
        else return false;
        
    }
};
// @lc code=end

