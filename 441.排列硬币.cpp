/*
 * @lc app=leetcode.cn id=441 lang=cpp
 *
 * [441] 排列硬币
 */

// @lc code=start
class Solution {
public:
    int arrangeCoins(int n) {
        if(n < 2)
            return n; 
        long long left = 1, right = n;
        while(left <= right){
            long long  mid = (left + right) / 2;
            long long res = mid*(mid+1)/2;
            if(res == n)
                return mid;
            else if(res < n)
                left = mid+1;
            else
                right = mid-1;
        }
        return left-1 ;

    }
};
// @lc code=end

