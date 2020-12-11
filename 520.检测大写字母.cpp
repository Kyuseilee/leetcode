/*
 * @lc app=leetcode.cn id=520 lang=cpp
 *
 * [520] 检测大写字母
 */

// @lc code=start
class Solution {
public:
    bool detectCapitalUse(string word) {
        int count = 0;
        for(auto ch : word){
            if(ch == toupper(ch))
                count++;
        }
        return (count == 0 or count == word.size() or (count == 1 and word[0] == toupper(word[0])));
    }
};
// @lc code=end

