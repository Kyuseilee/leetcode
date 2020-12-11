/*
 * @lc app=leetcode.cn id=551 lang=cpp
 *
 * [551] 学生出勤记录 I
 */

// @lc code=start
class Solution {
public:
    bool checkRecord(string s) {
        int count = 0;
        int late = 0;
        char former = s[0];
        for(auto ch : s){
            if(ch == 'A')
            {
                count++;
                late = 0;
            }
            else if(ch == 'L')
            {
                if(former == 'L' and late == 2)
                    return false;
                former = 'L';
                late += 1;
            }
            else
            {
                late = 0;
            }
            
        }
        return count < 2;

    }
};
// @lc code=end

