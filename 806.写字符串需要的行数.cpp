/*
 * @lc app=leetcode.cn id=806 lang=cpp
 *
 * [806] 写字符串需要的行数
 */

// @lc code=start
class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int length = 0;
        int line = 1;
        for(auto ch : s){
            int pos = ch -'a';
            if(length +widths[pos] > 100)
            {
                line++;
                length = widths[pos];
            }
            else{
                length += widths[pos];
            }
        }
        if(length > 100)
        {
            line++;
            length %= 100;
        }
        return {line, length};
    }
};
// @lc code=end

