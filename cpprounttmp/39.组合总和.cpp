/*
 * @lc app=leetcode.cn id=39 lang=cpp
 *
 * [39] 组合总和
 */

// @lc code=start

class Solution {
    private:
        vector<vector<int>> res;
        vector<int> path;

        void backtracking(vector<int>candidates, int target, int sum, int startIndex){
            if(sum == target){
                res.push_back(path);
                return;
            }
            for(int i = startIndex; i < candidates.size() and sum + candidates[i] <= target; i++){
                sum += candidates[i];
                path.push_back(candidates[i]);
                backtracking(candidates, target, sum, i);
                sum -= candidates[i];
                path.pop_back();
            }
        }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        res.clear();
        path.clear();
        sort(candidates.begin(), candidates.end());
        backtracking(candidates, target, 0, 0);
        return res;
    }
};
// @lc code=end

