/*
 * @lc app=leetcode.cn id=1422 lang=cpp
 *
 * [1422] 分割字符串的最大得分
 */

// @lc code=start
class Solution {
public:
    int maxScore(string s) {
        int sum = 0;
        int right = count(s.begin(), s.end(), '1');
        int left = 0;
        if(s[0] == '0')
        {
            left++;
            sum = max(sum, left+right);
        }
        else{
            right--;
        }
        for(int i = 1; i < s.size(); i++){
            sum = max(sum, left+right);
            if(s[i] == '0')
            {
                left++;
            }
            else{
                right--;
            }
            // sum = max(tmp, sum);
        }
        return sum;
    }
};
// @lc code=end

