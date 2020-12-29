/*
 * @lc app=leetcode.cn id=1550 lang=cpp
 *
 * [1550] 存在连续三个奇数的数组
 */

// @lc code=start
class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int n = arr.size();
        int slow = 0, fast = 0;
        while(slow < n and fast < n){
            if(arr[fast] % 2 == 1)
                fast++;
            else{
                if(fast - slow >= 3)
                    return true;
                while(fast < n and arr[fast] % 2 == 0)
                    fast++;
                slow = fast;
            }
        }
        fast = min(fast, n-1);
        if(fast - slow >= 2)
            return true;
        return false;

    }
};
// @lc code=end

