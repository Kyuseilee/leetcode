/*
 * @lc app=leetcode.cn id=28 lang=cpp
 *
 * [28] 实现 strStr()
 */

// @lc code=start
class Solution {
public:
    int strStr(string haystack, string needle) {
        int small_length = needle.size();
        int long_length = haystack.size();
        if(small_length == long_length)
        {
            if(haystack == needle)
                return 0;
            else
            {
                return -1;
            }
            
        }
        else if(small_length > long_length)
            return -1;
        else if (small_length == 0)
            return 0;
        for(int i = 0; i <= haystack.size() - small_length; i++){
            string sub = haystack.substr(i, small_length);
            if(sub == needle)
                return i;
        }
        return -1;
    }
};
// @lc code=end

