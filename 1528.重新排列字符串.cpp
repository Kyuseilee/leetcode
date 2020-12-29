/*
 * @lc app=leetcode.cn id=1528 lang=cpp
 *
 * [1528] 重新排列字符串
 */

// @lc code=start
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string result(s.size(), 0);
        for(int i = 0; i < s.size(); i++){
            result[indices[i]] = s[i];
        }
        return result;

    }
};
// @lc code=end

