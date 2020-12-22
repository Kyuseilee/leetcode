/*
 * @lc app=leetcode.cn id=1576 lang=cpp
 *
 * [1576] 替换所有的问号
 */

// @lc code=start
class Solution {
public:
    string modifyString(string s) {
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '?'){
                if(i > 0)
                    s[i] = s[i-1]-2;
                else{
                    s[i] = 'a';
                }
                if(i + 1 <= s.size()){
                    if(s[i] == s[i+1])
                        s[i] = s[i+1] -1;
                }
                if(s[i] > 'z' or s[i] < 'a')
                    s[i] = 'a' + s[i+1] - s[i-1]-1;
            }
        }
        return s;
    }
};
// @lc code=end

