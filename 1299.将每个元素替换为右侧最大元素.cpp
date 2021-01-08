/*
 * @lc app=leetcode.cn id=1299 lang=cpp
 *
 * [1299] 将每个元素替换为右侧最大元素
 */

// @lc code=start
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> res(arr.size(), 0);
        res[arr.size()-1] = -1;
        for(int i = arr.size() -2; i >= 0; i--){
            res[i] = max(res[i+1], arr[i+1]);
        }
        return res;

    }
};
// @lc code=end

