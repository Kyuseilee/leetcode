/*
 * @lc app=leetcode.cn id=788 lang=cpp
 *
 * [788] 旋转数字
 */

// @lc code=start
class Solution {
public:
    int rotatedDigits(int N) {
        int count = 0;
        for(int i = 1; i <= N; i++){
            if(helper(i))
                count++;
        }
        return count;
    }
    bool helper(int val){
        vector<int> tmp;
        while(val){
            if(val <= 10)
            {
                tmp.push_back(val);
                break;
            }
            else{
                tmp.push_back(val%10);
                val /= 10;
            }
        }
        for(int i = 0; i < tmp.size(); i++){
            if(tmp[i] != 2 and tmp[i] != 5 and tmp[i] != 6 and tmp[i] != 9)
                return false;
        }
        tmp.clear();
        return true;
    }

};
// @lc code=end

