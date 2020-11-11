/*
 * @lc app=leetcode.cn id=119 lang=cpp
 *
 * [119] 杨辉三角 II
 */

// @lc code=start
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> numbers;
        for(int i = 0; i <= rowIndex; i++){
            numbers.push_back(vector<int>(i+1, 1));
        }
        for(int i = 0; i <= rowIndex; i++){
            for(int j = 1; j<i; j++){
                numbers[i][j] = numbers[i-1][j-1] + numbers[i-1][j];
            }
        }
        return numbers[rowIndex];

    }
};
// @lc code=end

