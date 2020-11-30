/*
 * @lc app=leetcode.cn id=684 lang=cpp
 *
 * [684] 冗余连接
 */

// @lc code=start
class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        unordered_map<int, int>res;
        vector<vector<int>>result;
        for(int i = 0; i < edges.size(); i++){
            res[edges[i][0]] += 1;
            res[edges[i][1]] += 1;
            if(res[edges[i][0]] > 1 and res[edges[i][1]] > 1)
                result.push_back(edges[i]);
        }
        return result[result.size() -1];

    }
};
// @lc code=end

