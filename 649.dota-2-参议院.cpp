/*
 * @lc app=leetcode.cn id=649 lang=cpp
 *
 * [649] Dota2 参议院
 */

// @lc code=start
class Solution {
public:
    string predictPartyVictory(string senate) {
        bool flag;
        queue<int>radiant;
        queue<int>dire;
        for(int i = 0; i < senate.size(); i++){
            if(senate[i] == 'R')
                radiant.push(i);
            else{
                dire.push(i);
            }
        }
        int n = senate.size();
        while(!radiant.empty() and !dire.empty()){
            if(radiant.front() < dire.front()){
                radiant.push(radiant.front() + n);
            }
            else{
                dire.push(dire.front() + n);
            }
            radiant.pop();
            dire.pop();
        }
        return !radiant.empty() ? "Radiant" : "Dire";

    }
};
// @lc code=end

