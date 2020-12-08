/*
 * @lc app=leetcode.cn id=345 lang=cpp
 *
 * [345] 反转字符串中的元音字母
 */

// @lc code=start
class Solution {
public:
    string reverseVowels(string s) {
        if(s.size() < 2)
            return s;
        string v = "aeiouAEIOU";
        int i = 0;
        int j = s.size() -1;
        while(i < j){
            while(i < j and v.find(s[i]) == v.npos)
            {
                i++;
            }
            while(i < j and v.find(s[j]) == v.npos)
            {
                j--;
            }
            swap(s[i], s[j]);
        }
        return s;

    }
};
// @lc code=end

