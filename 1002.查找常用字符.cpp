/*
 * @lc app=leetcode.cn id=1002 lang=cpp
 *
 * [1002] 查找常用字符
 */

// @lc code=start
class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        unordered_map<char, int>cmp;
        for(auto str: A){
            for(auto ch : str){
                if(A[0].find(ch) == A[0].npos)
                    continue;
                cmp[ch] += 1;
            }
        }
        vector<string> res;
        for(auto item : cmp){
            if(item.second >= 3){
                while(item.second >= 3){
                    string tmp = "";
                    tmp += item.first;
                    res.push_back(tmp);
                    item.second -= 3;
                }
            }
        }
        return res;

    }
};
// @lc code=end

