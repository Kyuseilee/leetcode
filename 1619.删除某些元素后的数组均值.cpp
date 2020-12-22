/*
 * @lc app=leetcode.cn id=1619 lang=cpp
 *
 * [1619] 删除某些元素后的数组均值
 */

// @lc code=start
class Solution {
public:
    double trimMean(vector<int>& arr) {
        int n = arr.size();
        int n5 = n*0.05;
        sort(arr.begin(), arr.end());
        double sum = 0;
        for(int i = n5; i <n- n5; i++){
            sum += arr[i];
        }
        return sum / (n-2*n5);

    }
};
// @lc code=end

