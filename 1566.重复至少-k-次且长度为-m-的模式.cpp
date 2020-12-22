/*
 * @lc app=leetcode.cn id=1566 lang=cpp
 *
 * [1566] 重复至少 K 次且长度为 M 的模式
 */

// @lc code=start
class Solution {
public:
    bool containsPattern(vector<int>& arr, int m, int k) {
        if(m*k > arr.size())
            return false;
        string s = "";
        for(auto num:arr){
            s += to_string(num);
        }
        for(int i = 0; i < arr.size() - k; i++){
            string tmp = "";
            strncpy(tmp, s+i, k);
            int count = 1;
            while(tmp.size() < arr.size()){
                if(compare(i, ))
            }

        }
        

    }
};
// @lc code=end

