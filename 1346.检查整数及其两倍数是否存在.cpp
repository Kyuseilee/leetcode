/*
 * @lc app=leetcode.cn id=1346 lang=cpp
 *
 * [1346] 检查整数及其两倍数是否存在
 */

// @lc code=start
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<double, bool>cmp;
        for(auto num: arr)
        {
            double tmp = double(num) /2;
            cout << tmp << " ";
            if(cmp[2*num] or cmp[tmp])
                return true;
            else
            {
                cmp[num] = true;
            }
        }
        return false;
    }
};
// @lc code=end

