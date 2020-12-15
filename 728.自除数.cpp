/*
 * @lc app=leetcode.cn id=728 lang=cpp
 *
 * [728] 自除数
 */

// @lc code=start
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        while(left <= right){
            if(helper(left))
                res.push_back(left);
            left++;
        }
        return res;
    }
    bool helper(int val){
        int tmp = val;
        while(val != 0){
            if(val % 10 == 0)
                return false;
            if(tmp % (val % 10) == 0){
                val /= 10;
            }
            else 
                return false;
        }
        return true;
    }
};
// @lc code=end

