/*
 * @lc app=leetcode.cn id=748 lang=cpp
 *
 * [748] 最短补全词
 */

// @lc code=start
class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        string real_need = "";
        for(auto ch : licensePlate){
            if(tolower(ch) >= 'a' and tolower(ch) <= 'z')
                real_need += tolower(ch);
        }
        unordered_map<char, int>com;
        for(auto ch : real_need){
            com[ch] += 1;
        }
        string res = "";
        int min_length = INT_MAX;
        for(auto word : words){
            bool flag = false;
            unordered_map<char, int> tmp;
            for(auto ch : word){
                tmp[ch] += 1;
            }
            for(auto ch : real_need){
                if(!tmp[ch] or tmp[ch] < com[ch])
                {
                    flag = true;
                    break;
                }
            }
            if(!flag)
            {
                if(word.size() < min_length)
                {
                    res = word;
                    min_length = word.size();
                }
            }
        }
        return res;
    }
};
// @lc code=end

