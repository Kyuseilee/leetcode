/*
 * @lc app=leetcode.cn id=830 lang=cpp
 *
 * [830] 较大分组的位置
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>>res;
        int slow = 0, fast = 0;
        while(fast < s.size()){
            while(s[slow] == s[fast]){
                fast++;
            }
            if(slow+1 == fast)
                slow = fast;
            else{
                if(fast - slow >= 3){
                    res.push_back({slow, fast-1});
                }
                slow = fast;
            }
        }
        return res;
    }
};
// @lc code=end

