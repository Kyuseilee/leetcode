/*
 * @lc app=leetcode.cn id=500 lang=cpp
 *
 * [500] 键盘行
 */

// @lc code=start
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string line1 = "qwertyuiopQWERTYUIOP";
        string line2 = "asdfghjklASDFGHJKL";
        string line3 = "zxcvbnmZXCVBNM";

        unordered_map<char, int> com;
        for(auto ch : line1){
            com[ch] = 0;
        }
        for(auto ch : line2){
            com[ch] = 1;
        }
        for(auto ch : line3){
            com[ch] = 2;
        }
        vector<string> res;
        for(auto & word : words){
            int sum = 0;
            for(auto & ch : word){
                sum += com[ch];
            }
            if(sum == word.size() * com[word[0]])
                res.push_back(word);
        }
        return res;
    }
};
// @lc code=end

