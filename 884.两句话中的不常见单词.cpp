/*
 * @lc app=leetcode.cn id=884 lang=cpp
 *
 * [884] 两句话中的不常见单词
 */

// @lc code=start
class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        unordered_map<string, int>com;
        vector<string> res;
        string tmp;
        for(int i = 0; i < A.size(); i++){
            if(isspace(A[i])){
                com[tmp] += 1;
                tmp = "";
            }
            else{
                tmp += A[i];
            }
        }
        if(!tmp.empty()){
            com[tmp] += 1;
            tmp = "";
        }
        for(int i = 0; i < B.size(); i++){
            if(isspace(B[i])){
                com[tmp] += 1;
                tmp = "";
            }
            else{
                tmp += B[i];
            }
        }
        if(!tmp.empty()){
            com[tmp] += 1;
            tmp = "";
        }
        for(auto item : com){
            if(item.second == 1){
                res.push_back(item.first);
            }
        }
        return res;
    }
};
// @lc code=end

