/*
 * @lc app=leetcode.cn id=374 lang=cpp
 *
 * [374] 猜数字大小
 */

// @lc code=start
/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        if(!guess(0))
            return 0;
        if(!guess(n))
            return n ;
        long long start = 0;
        while(start < n){
            long long mid = (start + n) / 2;
            if(guess(mid) == 1)
            {
                start = mid;
            }
            else if(guess(mid) == -1)
            {
                n  = mid;
            }
            else
            {
                return mid;
            }
        }
        return n;
        
    }
};
// @lc code=end

