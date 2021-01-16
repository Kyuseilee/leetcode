/*
 * @lc app=leetcode.cn id=1374 lang=cpp
 *
 * [1374] 生成每种字符都是奇数个的字符串
 */

// @lc code=start
class Solution {
public:
    string generateTheString(int n) {
        string res = "";
        if(n % 2 == 1)
        {
            while(n)
            {
                res += 'a';
                n--;
            }
        }
        else{
            while(n-1)
            {
                res += 'a';
                n--;
            }
            res += 'b';
        }
        return res;
    }
};
// @lc code=end

