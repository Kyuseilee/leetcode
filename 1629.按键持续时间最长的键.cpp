/*
 * @lc app=leetcode.cn id=1629 lang=cpp
 *
 * [1629] 按键持续时间最长的键
 */

// @lc code=start
class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        unordered_map<char, int> res;
        int start = 0;
        for(int i = 0; i< releaseTimes.size(); i++){
            res[keysPressed[i]] += releaseTimes[i]-start;
            start = releaseTimes[i];
        }
        int max_val = 0;
        char index;
        for(auto num:res){
            if(max_val < num.second){
                index = num.first;
                max_val = num.second;
            }
            else if(max_val == num.second){
                if(index - 'a' < num.first - 'a')
                    index = num.first;
            }
        }
        return index;
    }
};
// @lc code=end

