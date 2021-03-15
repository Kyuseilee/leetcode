/*
 * @lc app=leetcode.cn id=91 lang=cpp
 *
 * [91] 解码方法
 */

// @lc code=start
class Solution {
public:
    int numDecodings(string s) {
        int curr = 1, pre = 1;
        if(s[0] == '0')
            return 0;
        for(int i = 1; i <s.size(); i++)
        {
            int tmp = curr;
            if(s[i] == '0')
            {
                if(s[i-1] == '1' or s[i-1] == '2') curr = pre;
                else
                    return 0;
            }
            else if(s[i-1] == '1' or (s[i-1] == '2' and s[i] >'0' and s[i] < '7'))
                curr += pre;
            pre = tmp;
        }
        return curr;
    }
};
// @lc code=end

