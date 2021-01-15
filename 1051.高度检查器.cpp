/*
 * @lc app=leetcode.cn id=1051 lang=cpp
 *
 * [1051] 高度检查器
 */

// @lc code=start
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> tmp = heights;
        sort(tmp.begin(), tmp.end());
        int count = 0;
        for(int i = 0; i < tmp.size(); i++){
            if(tmp[i] != heights[i])
                count++;
        }
        return count;
    }
};
// @lc code=end

