/*
 * @lc app=leetcode.cn id=860 lang=cpp
 *
 * [860] 柠檬水找零
 */

// @lc code=start
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int left5 = 0;
        int left10 = 0;
        int left20 = 0;
        for(auto bill : bills){
            if(bill == 5){
                left5 += 1;
            }
            else if(bill == 10){
                if(left5)
                    left5 -= 1;
                else{
                    return false;
                }
                left10 += 1;
            }
            else{
                if(left10)
                {
                    left10 -=1;
                    left5 -= 1;
                }
                else if(left5){
                    left5 -= 3;
                }
                else
                {
                    return false;
                }
                if(left5 < 0)
                    return false;
            }
        }
        return true;
    }
};
// @lc code=end

