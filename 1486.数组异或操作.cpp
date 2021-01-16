/*
 * @lc app=leetcode.cn id=1486 lang=cpp
 *
 * [1486] 数组异或操作
 */

// @lc code=start
class Solution {
public:
    int xorOperation(int n, int start) {
        int count = 0;
        int sum = 0;
        while(count < n)
        {
            sum ^= start + 2*count;
            count++;
        }
        return sum;
    }
};
// @lc code=end

