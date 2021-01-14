/*
 * @lc app=leetcode.cn id=738 lang=cpp
 *
 * [738] 单调递增的数字
 */

// @lc code=start
class Solution {
public:
    int monotoneIncreasingDigits(int N) {
        string sN = to_string(N);
        int flag = sN.size();
        for(int i = flag-1; i >0; i--){
            if(sN[i-1] > sN[i])
            {
                flag = i;
                sN[i-1]--;
            }
        }
        for(int i = flag; i < sN.size(); i++){
            sN[i] = '9';
        }
        return stoi(sN);
    }
};
// @lc code=end

