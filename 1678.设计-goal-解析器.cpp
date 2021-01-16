/*
 * @lc app=leetcode.cn id=1678 lang=cpp
 *
 * [1678] 设计 Goal 解析器
 */

// @lc code=start
class Solution {
public:
    string interpret(string command) {
        int pos = 0;
        string res = "";
        while(pos < command.size())
        {
            if(command[pos] == 'G')
            {
                pos++;
                res += 'G';
            }
            else if(command[pos] == '(')
            {
                if(command[pos+1] == 'a')
                {
                    pos += 4;
                    res += "al";
                }
                else
                {
                    pos += 2;
                    res += 'o';
                }
            }
        }
        return res;
    }
};
// @lc code=end

