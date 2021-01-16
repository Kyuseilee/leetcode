/*
 * @lc app=leetcode.cn id=1323 lang=cpp
 *
 * [1323] 6 和 9 组成的最大数字
 */

// @lc code=start
class Solution {
public:
    int maximum69Number (int num) {
        string snum = to_string(num);
        for(int i = 0; i < snum.size(); i++)
        {
            if(snum[i] == '6')
            {
                snum[i] = '9';
                return stoi(snum);
            }
        }
        return num;
    }
};
// @lc code=end

