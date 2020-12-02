/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 */

// @lc code=start
class Solution {
public:
    int reverse(int x) {
        int flag = 0;
        if(x > INT_MAX or x < -INT_MAX)
            return 0;
        if(x < 0)
        {
            flag = 1;
            x = abs(x);
        }
        long sum = 0;
        int MAX = INT_MAX;
        while(x){
            sum = sum*10+x%10;
            if(sum > INT_MAX)
                return 0;
            x /= 10;
        }
        return flag == 1? -sum : sum;

    }
};
// @lc code=end

