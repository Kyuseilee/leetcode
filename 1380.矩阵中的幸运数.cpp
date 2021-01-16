/*
 * @lc app=leetcode.cn id=1380 lang=cpp
 *
 * [1380] 矩阵中的幸运数
 */

// @lc code=start
class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int>rows;
        vector<int>columns;
        for(int i = 0; i < matrix.size(); i++)
        {
            vector<int>tmp = matrix[i];
            sort(tmp.begin(), tmp.end());
            rows.push_back(tmp[0]);
        }
        for(int j = 0; j < matrix[0].size(); j++)
        {
            vector<int> tmp;
            for(int i = 0; i<matrix.size(); i++)
            {
                tmp.push_back(matrix[i][j]);
            }
            sort(tmp.rbegin(), tmp.rend());
            columns.push_back(tmp[0]);
        }
        vector<int>res;
        for(int i = 0; i < matrix.size(); i++)
        {
            for(int j = 0; j < matrix[0].size(); j++)
            {
                if(rows[i] == matrix[i][j] and columns[j] == matrix[i][j])
                    res.push_back(matrix[i][j]);
            }
        }
        return res;
    }
};
// @lc code=end

