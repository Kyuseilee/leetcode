/*
 * @lc app=leetcode.cn id=1582 lang=cpp
 *
 * [1582] 二进制矩阵中的特殊位置
 */

// @lc code=start
class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        vector<int>rows(mat.size(), false);
        vector<int>columns(mat[0].size(), false);
        for(int i = 0; i < mat.size(); i++)
        {
            for(int j = 0; j < mat[0].size(); j++)
            {
                if(mat[i][j] == 1)
                {
                    rows[i] += 1;
                    columns[j] += 1;
                }
            }
        }
        int count = 0;
        for(int i = 0; i < mat.size(); i++)
        {
            for(int j = 0; j < mat[0].size(); j++)
            {
                if(mat[i][j] == 1)
                {
                    if(rows[i] == 1 and columns[j] == 1)
                        count++;
                }
            }
        }
        return count;
    }
};
// @lc code=end

