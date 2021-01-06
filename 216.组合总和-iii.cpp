/*
 * @lc app=leetcode.cn id=216 lang=cpp
 *
 * [216] 组合总和 III
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> res;
    vector<int> tmp;
    vector<vector<int>> combinationSum3(int k, int n) {
        helper(0, 1, k,k, n);
        return res;
    }
    void helper(int sum,int index, int k, int length, int n){
        if(sum == n and tmp.size() == length){
            res.push_back(tmp);
        }
        for(int i = index; i < 10; i++){
            tmp.push_back(i);
            sum += i;
            k -= 1;
            helper(sum, i+1,k,length, n);
            sum -= i;
            k += 1;
            tmp.pop_back();
        }
    }
};
// @lc code=end

