/*
 * @lc app=leetcode.cn id=748 lang=cpp
 *
 * [748] 最短补全词
 */

// @lc code=start
class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        unordered_map<char, int> com;
        for(auto ch : licensePlate){
            com[tolower(ch)] += 1;
        }
        for(int i = 0; i < words.size(); i++){
            
        }
        

    }
};
// @lc code=end

