/*
 * @lc app=leetcode.cn id=338 lang=cpp
 *
 * [338] 比特位计数
 */

// @lc code=start
class Solution {
public:
    vector<int> countBits(int num) {
        vector<int>res(num+1, 0);
        res[0] = 0;
        for(int i = 1; i <= num; i++)
        {
            res[i] = res[i&(i-1)] +1;
        }
        return res;
        
    }
};
// @lc code=end

