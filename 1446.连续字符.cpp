/*
 * @lc app=leetcode.cn id=1446 lang=cpp
 *
 * [1446] 连续字符
 */

// @lc code=start
class Solution {
public:
    int maxPower(string s) {
        int max_char = 0;
        int start = 0;
        int pointer;
        while(start < s.size()){
            pointer = start+1;
            while(s[pointer] == s[start])
                pointer++;
            max_char = max(max_char, pointer-start);
            start = pointer;
        }
        return max(max_char, pointer-start);

    }
};
// @lc code=end

