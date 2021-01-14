/*
 * @lc app=leetcode.cn id=621 lang=cpp
 *
 * [621] 任务调度器
 */

// @lc code=start
class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char, int> cmp;
        char max_ch = "";
        int max_val = 0;
        for(auto ch : tasks){
            cmp[ch] += 1;
            if(cmp[ch] > max_val){
                max_val = cmp[ch];
                max_ch = ch;
            }
        }
        string res = "";
        zz

    }
};
// @lc code=end

