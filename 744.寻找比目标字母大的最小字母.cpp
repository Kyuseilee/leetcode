/*
 * @lc app=leetcode.cn id=744 lang=cpp
 *
 * [744] 寻找比目标字母大的最小字母
 */

// @lc code=start
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        string res = "abcdefghijklmnopqrstuvwxyz";
        for(int i = 0; i < letters.size(); i++){
            if(res.find(target) >= res.find(letters[i]))
                continue;
            else
            {
                return letters[i];
            }
        }
        return letters[0];
    }
};
// @lc code=end

