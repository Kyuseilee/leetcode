/*
 * @lc app=leetcode.cn id=39 lang=cpp
 *
 * [39] 组合总和
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> res;
    vector<int> tmp;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        res.clear();
        tmp.clear();
        backtracking(candidates, target, 0, 0);
        return res;
    }
    void backtracking(vector<int>& candidates, int target, int index, int sum){
        if(sum == target){
            res.push_back(tmp);
            sum = 0;
            return;
        }
        while(index < candidates.size() and sum < target){
            sum += candidates[index];
            tmp.push_back(candidates[index]);
            backtracking(candidates, target, index, sum);
            sum -= candidates[index];
            tmp.pop_back();
            index++;
        }
    }
};
// @lc code=end

