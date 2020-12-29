/*
 * @lc app=leetcode.cn id=1436 lang=cpp
 *
 * [1436] 旅行终点站
 */

// @lc code=start
class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, int>res;
        for(int i = 0; i < paths.size(); i++){
            res[paths[i][0]] += 1;
            
        }
        for(int i = 0; i < paths.size(); i++){
            res[paths[i][1]] -= 1;
            if(res[paths[i][1]] < 0)
                return paths[i][1];
        }
        return "";
    }
};
// @lc code=end

