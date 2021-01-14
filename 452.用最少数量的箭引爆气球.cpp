/*
 * @lc app=leetcode.cn id=452 lang=cpp
 *
 * [452] 用最少数量的箭引爆气球
 */

// @lc code=start
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.empty())
            return 0;
        sort(points.begin(), points.end());
        int count = 1;
        int pos = points[0][0];
        int end = points[0][1];
        for(int i = 1; i < points.size(); i++){
            cout << points[i][0] << " " <<points[i][1] << "\n";
            if(points[i][0] <= end){
                pos = points[i][0];
                if(points[i][1] < end){
                    end = points[i][1];
                }
            }
            else{
                count++;
                pos = points[i][0];
                end = points[i][1];
            }
        }
        return count;
    }
};
// @lc code=end

