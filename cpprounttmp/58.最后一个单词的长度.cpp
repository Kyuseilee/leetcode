/*
 * @lc app=leetcode.cn id=58 lang=cpp
 *
 * [58] 最后一个单词的长度
 */

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        if(!s.size()) return 0;
        int n = s.size()-1;
        int flag = 1;
        int count = 0;
        for(int i = n; i >= 0; i--){
            if(flag and s[i] != ' ')
                flag = 0;
            if(s[i] == ' ' and not flag)
                break;
            if(s[i] != ' ')
                count++;
        }
        return count;
    }
};
// @lc code=end

