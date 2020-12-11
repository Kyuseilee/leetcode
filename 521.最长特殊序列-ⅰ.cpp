/*
 * @lc app=leetcode.cn id=521 lang=cpp
 *
 * [521] 最长特殊序列 Ⅰ
 */

// @lc code=start
class Solution {
public:
    int findLUSlength(string a, string b) {
        int lefta = 0, leftb = 0, righta= a.size(), rightb = b.size();
        int count = 0;
        while(lefta <= righta and leftb <= rightb){
            while(lefta <= righta and leftb <= rightb and a[lefta] == b[leftb])
            {
                lefta++;
                leftb++;
            }
            while(lefta <= righta and leftb <= rightb and a[righta] == b[rightb])
            {
                rightb--;
                righta--;
            }
            if(lefta > righta or leftb > rightb)
                break;
            count++;
            lefta++;
            leftb++;
        }
        if(count)
            return count;
        return -1;

    }
};
// @lc code=end

