/*
 * @lc app=leetcode.cn id=1385 lang=cpp
 *
 * [1385] 两个数组间的距离值
 */

// @lc code=start
class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count = 0;
        for(auto num : arr1){
            int left = num - d;
            int right = num + d;
            bool flag = false;
            for(auto n:arr2){
                if(n >= left and n <= right)
                {
                    flag = true;
                    break;
                }
            }
            if(!flag)
                count++;
        }
        return count;
    }
};
// @lc code=end

