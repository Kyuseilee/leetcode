/*
 * @lc app=leetcode.cn id=344 lang=cpp
 *
 * [344] 反转字符串
 */

// @lc code=start
class Solution {
public:
    void reverseString(vector<char>& s) {
        if(s.size() < 2)
            return ;
        int end = s.size() -1;
        int start = 0;
        while (start < end){
            char tmp = s[end];
            s[end] = s[start];
            s[start] = tmp;
            start++;
            end--;
        }
        return ;
    }
};
// @lc code=end

