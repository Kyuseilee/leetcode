/*
 * @lc app=leetcode.cn id=57 lang=cpp
 *
 * [57] 插入区间
 */

// @lc code=start
class Solution {
public:
    static bool cmp(vector<int> a, vector<int>b)
    {
        return a[0] < b[0];
    }
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>res;
        int left = newInterval[0];
        int right = newInterval[1];
        bool flag = false;

        int toPutleft = left;
        int toPutright = right;
        for(auto ch : intervals)
        {
            if(ch[0] > right or ch[1] < left)
                res.push_back(ch);
            else
            {
                flag =true;
                toPutleft = min(ch[0], toPutleft);
                toPutright = max(ch[1], toPutright);
            }
        }
        if(flag)
            res.push_back({toPutleft, toPutright});
        else
        {
            res.push_back({left, right});
        }

        sort(res.begin(), res.end(), cmp);
        return res;
    }
};
// @lc code=end

