/*
 * @lc app=leetcode.cn id=657 lang=cpp
 *
 * [657] 机器人能否返回原点
 */

// @lc code=start
class Solution {
public:
    bool judgeCircle(string moves) {
        int a[2] = {0, 0};
        for(auto ch : moves){
            if(ch == 'U')
                a[0] += 1;
            else if (ch == 'D')
                a[0] -= 1;
            else if(ch == 'L')
                a[1] += 1;
            else 
                a[1] -= 1;
        }
        return a[0] == 0 and a[1] == 0;

    }
};
// @lc code=end

