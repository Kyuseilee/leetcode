/*
 * @lc app=leetcode.cn id=258 lang=cpp
 *
 * [258] 各位相加
 */

// @lc code=start
class Solution {
public:
    int addDigits(int num) {
        int sum = 0;
        while(num >= 10){
            sum = 0;
            while(num){
                int temp = num % 10;
                sum += temp;
                num /= 10;
            }
            num = sum;
        }
        return num;

    }
};
// @lc code=end

