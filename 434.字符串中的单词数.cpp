/*
 * @lc app=leetcode.cn id=434 lang=cpp
 *
 * [434] 字符串中的单词数
 */

// @lc code=start
class Solution {
public:
    int countSegments(string s) {
        int count = 0;
        if(s.empty())
            return 0;
        int flag = 1;
        for(int i = 0; i < s.size(); i++){
            if(flag and !isspace(s[i]))
            {
                flag = 0;
                count++;
            }
            else if(isspace(s[i]))
                flag = 1;
        }
        return count;

    }
};
// @lc code=end

