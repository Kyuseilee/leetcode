/*
 * @lc app=leetcode.cn id=455 lang=cpp
 *
 * [455] 分发饼干
 */

// @lc code=start
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int count = 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int j = 0;
        for(int i = 0; i < g.size(); i++){
            while(j < s.size() and g[i] > s[j])
            {
                j++;
            }
            if(i > s.size() or j >= s.size())
                break;
            count++;
            j++;
        }
        return count;
    }
};
// @lc code=end

