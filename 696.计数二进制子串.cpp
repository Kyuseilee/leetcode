/*
 * @lc app=leetcode.cn id=696 lang=cpp
 *
 * [696] 计数二进制子串
 */

// @lc code=start
class Solution {
public:
    int countBinarySubstrings(string s) {
        int count = 0;
        int count0 = 0, count1 = 0;
        for(int i = 0; i< s.size(); i++){
            if(s[i] == '0')
            {
                count0++;
            }
            else
            {
                count1++;
            }
            for(int j = i+1; j < s.size(); j++){
                if(s[j] == '0')
                {
                    count0++;
                }
                else
                {
                    count1++;
                }
                if(count0 == count1 and count0 != 0)
                {
                    count++;
                    count0 = 0;
                    count1 = 0;
                    break;
                }
            }
            count0 = 0;
            count1 = 0;
        }
        return count;

    }
};
// @lc code=end

