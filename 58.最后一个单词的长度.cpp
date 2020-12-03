/*
 * @lc app=leetcode.cn id=58 lang=cpp
 *
 * [58] 最后一个单词的长度
 */

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size() -1;
        while(s[i] == ' ')
            i--;
        int count = 0;
        for(i ; i >= 0; i--)
        {
            if(s[i] == ' ')
                break;
            count++;
        }
        return count;
        
    }
};
// @lc code=end

