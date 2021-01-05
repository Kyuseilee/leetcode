/*
 * @lc app=leetcode.cn id=74 lang=cpp
 *
 * [74] 搜索二维矩阵
 */

// @lc code=start
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int>com;
        bool flag = false;
        
        int rows = matrix.size();
        int columns = matrix[0].size();
        if(rows == 0 or columns == 0)
            return false;
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < columns; j++){
                com.push_back(matrix[i][j]);
            }
            sort(com.begin(), com.end());
            if(com != matrix[i])
                return false;
            else if(com[0] <= target and com[columns-1] >= target){
                if(find(com.begin(), com.end(), target) == com.end())
                    return false;
                else
                {
                    flag = true;
                }
            }
            com.clear();
        }
        return flag;
    }
};
// @lc code=end

