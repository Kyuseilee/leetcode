/*
 * @lc app=leetcode.cn id=202 lang=cpp
 *
 * [202] 快乐数
 */

// @lc code=start
class Solution {
public:
    int helper(int n){
        int sum = 0;
        while(n){
            sum += (n%10) * (n%10);
            n /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow = n, fast = n;
        do{
            slow = helper(slow);
            fast = helper(helper(fast));
        }while(slow != fast);
        return slow == 1;
    }
};
// @lc code=end

