/*
 * @lc app=leetcode.cn id=1496 lang=cpp
 *
 * [1496] 判断路径是否相交
 */

// @lc code=start
class Solution {
public:
    bool isPathCrossing(string path) {
        int up = 0, left = 0;
        set<pair<int, int>>cmp;
        cmp.insert({up, left});
        for(auto ch :path)
        {
            if(ch == 'N')
                up += 1;
            else if(ch == 'S')
                up -= 1;
            else if(ch == 'E')
                left += 1;
            else 
                left -=1;
            if(cmp.count({up, left}))
                return true;
            cmp.insert({up,left});
        }
        return false;
    }
};
// @lc code=end

