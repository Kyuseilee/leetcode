/*
 * @lc app=leetcode.cn id=58 lang=cpp
 *
 * [58] 最后一个单词的长度
 */

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.empty()) return 0;
        int size = s.size() -1;
        while(size >= 0 and s[size] == ' '){
            s.erase(size);
            --size;
        }
        int pos = s.find_last_of(' ');
        return s.length() - pos - 1;
        
    }
};
// @lc code=end

