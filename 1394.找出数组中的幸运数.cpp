/*
 * @lc app=leetcode.cn id=1394 lang=cpp
 *
 * [1394] 找出数组中的幸运数
 */

// @lc code=start
class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> cmp;
        for(auto ch : arr){
            cmp[ch] += 1;
        }
        int max_val = -1;
        for(auto item :cmp){
            if(item.first == item.second)
                max_val = max(max_val, item.second);
        }
        return max_val;
    }
};
// @lc code=end

