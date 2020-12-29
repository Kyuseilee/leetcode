/*
 * @lc app=leetcode.cn id=1502 lang=cpp
 *
 * [1502] 判断能否形成等差数列
 */

// @lc code=start
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        if(arr.size() < 2)
            return true;
        sort(arr.begin(), arr.end());
        int fast = 1, slow = 0;
        int divide = arr[1] - arr[0];
        while(fast < arr.size() and arr[fast] - arr[slow] == divide){
            fast++;
            slow++;
        }
        if(fast == arr.size())
            return true;
        return false;
    }
};
// @lc code=end

