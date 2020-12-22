/*
 * @lc app=leetcode.cn id=56 lang=cpp
 *
 * [56] 合并区间
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        int pos = 0;
        sort(intervals.begin(), intervals.end());
        while(pos < intervals.size()){
            int left = intervals[pos][0];
            int right = intervals[pos][1];
            for(int j = pos+1; j < intervals.size(); j++){
                if(right >= intervals[j][0])
                {
                    if(right < intervals[j][1])
                        right = intervals[j][1];
                    pos = j;
                }
                else{
                    break;
                }
            }
            res.push_back({left, right});
            pos += 1;
        }
        return res;
    }
};
// @lc code=end

