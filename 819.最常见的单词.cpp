/*
 * @lc app=leetcode.cn id=819 lang=cpp
 *
 * [819] 最常见的单词
 */

// @lc code=start
class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        string tmp = "";
        int count = 0;
        int pos = 0;
        unordered_map<string, int> res;
        while(pos < paragraph.size()){
            if(!isalnum(paragraph[pos]))
            {
                if(find(banned.begin(), banned.end(), tmp) == banned.end()){
                    res[tmp] += 1;
                }
                tmp = "";
                while(pos < paragraph.size() and !isalnum(paragraph[pos]))
                    pos++;
            }
            else{
                tmp += tolower(paragraph[pos]);
                pos++;
            }
        }
        if(!tmp.empty()){
            res[tmp] += 1;
        }
        int max_val = 0;
        string result = "";
        for(auto item : res){
            if(max_val < item.second){
                max_val = item.second;
                result = item.first;
            }
        }
        return result;
    }
};
// @lc code=end

