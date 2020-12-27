/*
 * @lc app=leetcode.cn id=1576 lang=cpp
 *
 * [1576] 替换所有的问号
 */

// @lc code=start
class Solution {
public:
    string modifyString(string s) {
        char pre = ' ';
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '?'){
                char tmp = 'a';
                while(tmp == pre or tmp == s[i+1])
                    tmp++;
                s[i] = tmp;
            }
            pre = s[i];
        }
        return s;
    }
};
// @lc code=end

