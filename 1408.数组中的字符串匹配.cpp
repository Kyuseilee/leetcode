/*
 * @lc app=leetcode.cn id=1408 lang=cpp
 *
 * [1408] 数组中的字符串匹配
 */

// @lc code=start
class Solution {
public:
    static bool cmp(const string a, const string b){
        return a.size() < b.size();
    }
    vector<string> stringMatching(vector<string>& words) {
        sort(words.begin(), words.end(), cmp);
        for(auto string : words){
            cout << string << "\n";
        }
        vector<string> res;
        int max_length = words[words.size()-1].size();
        for(int i = 0; words[i].size() < max_length; i++){
            string sub = words[i];
            for(int j = i+1; j < words.size(); j++){
                if()
            }
        }
    }
};
// @lc code=end

