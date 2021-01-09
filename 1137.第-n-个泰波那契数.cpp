/*
 * @lc app=leetcode.cn id=1137 lang=cpp
 *
 * [1137] 第 N 个泰波那契数
 */

// @lc code=start
class Solution {
public:
    int tribonacci(int n) {
        int first = 0, second = 1, third = 1;
        if(n == 0)
            return 0;
        else if(n <= 2)
            return 1;
        else{
            int start = 3;
            while(start <= n){
                int tmp = first + second + third;
                first= second;
                second = third;
                third = tmp;
                start++;
            }
        }
        return third;
    }
};
// @lc code=end

