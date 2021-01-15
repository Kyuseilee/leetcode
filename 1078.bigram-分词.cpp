/*
 * @lc app=leetcode.cn id=1078 lang=cpp
 *
 * [1078] Bigram 分词
 */

// @lc code=start
class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        istringstream words(text);
        vector<string>tmp;
        string w;
        while(words >> w){
            tmp.push_back(w);
        }
        vector<string> res;
        for(int i = 0; i < tmp.size()-1; i++){
            if(tmp[i] == first and tmp[i+1] == second)
            {
                if(i+2 == tmp.size())
                    break;
                res.push_back(tmp[i+2]);
            }
        }
        return res;

    }
};
// @lc code=end

