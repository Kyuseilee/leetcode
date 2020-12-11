/*
 * @lc app=leetcode.cn id=507 lang=cpp
 *
 * [507] 完美数
 */

// @lc code=start
class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum =0;
        if(num == 1)
            return false;
        for(int i = 2; i*i < num; i++){
            if(num % i == 0)
            {
                sum += i;
                sum += num/i;
            }
        }
        return sum+1 == num;

    }
};
// @lc code=end

