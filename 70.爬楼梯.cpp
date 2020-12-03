/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        if(n == 1)
            return 1;
        else if(n == 2)
            return 2;
        int first = 1;
        int second = 2;
        int cur = 3;
        while(cur <= n){
            int tmp = second;
            second = first + second;
            first = tmp;
            cur++;
        }
        return second;
        
    }
};
// @lc code=end

