/*
 * @lc app=leetcode.cn id=263 lang=cpp
 *
 * [263] 丑数
 */

// @lc code=start
class Solution {
public:
    bool isUgly(int num) {
    if(num == 1) return true;
    else if (num == 0) return false;
    while(true){
        if(num% 2 == 0) num/= 2;
        else if(num % 3 == 0) num /= 3;
        else if(num % 5 == 0) num /= 5;
        else
        {
            break;
        }
    }
    return num == 1;
}
};
// @lc code=end

