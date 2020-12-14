/*
 * @lc app=leetcode.cn id=566 lang=cpp
 *
 * [566] 重塑矩阵
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        vector<int> tmp;
        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < nums[0].size(); j++){
                tmp.push_back(nums[i][j]);
            }
        }
        if (r*c != tmp.size())
            return nums;
        vector<vector<int>> res;
        vector<int> change;
        int count=0;
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                change.push_back(tmp[count]);
                count++;
            }
            res.push_back(change);
            change.clear();
        }
        return res;

    }
};
// @lc code=end

