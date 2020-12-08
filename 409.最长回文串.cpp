/*
 * @lc app=leetcode.cn id=409 lang=cpp
 *
 * [409] 最长回文串
 */

// @lc code=start
class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> res;
        for(auto& ch : s)
            res[ch] += 1;
        int result = 0;
        int center = 0;
        for(auto item : res){
            if(item.second % 2 == 0)
                result += item.second;
            else
            {
                result += item.second - 1;
                center = 1;
            }
            
        }
        return result + center;


    }
};
// @lc code=end

