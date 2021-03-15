/*
 * @lc app=leetcode.cn id=304 lang=cpp
 *
 * [304] 二维区域和检索 - 矩阵不可变
 */

// @lc code=start
class NumMatrix {
public:
    vector<vector<int>> sums;
    NumMatrix(vector<vector<int>>& matrix) {
        if(matrix.size() == 0)
            return ;
        sums.resize(matrix.size(), vector<int>(matrix[0].size()+1));
        if(matrix.size() > 0)
        {
            for(int i = 0; i < matrix.size(); i++)
            {
                for(int j = 0; j < matrix[0].size(); j++)
                {
                    sums[i][j+1] = sums[i][j] + matrix[i][j];
                }
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum = 0;
        for(int i = row1; i <= row2; i++)
        {
            sum += sums[i][col2+1] - sums[i][col1];
        }
        return sum;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
// @lc code=end

