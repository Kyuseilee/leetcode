/*
 * @lc app=leetcode.cn id=524 lang=cpp
 *
 * [524] 通过删除字母匹配到字典里最长单词
 */

// @lc code=start
class Solution {
public:
    string findLongestWord(string s, vector<string>& d) {
        string res = "";
        int n = res.size();
        for(auto str : d){
            int flag = 0;
            int pointer = 0;
            for(int i = 0; i < str.size(); i++){
                int j = pointer;
                for(j = pointer; j < s.size(); j++){
                    if (s[j] == str[i]){
                        pointer = j;
                        break;
                    }
                }
                if(j == s.size()){
                    flag = 1;
                    pointer = 0;
                    break;
                }
            }
            if(!flag){
                int tmp = str.size();
                if(n < tmp)
                {
                    res = str;
                    n = res.size();
                }
                else if(n == tmp){
                    int i = 0;
                    while(i < n){
                        if(res[i] > str[i]){
                            res = str;
                        }
                        else if(res[i] == str[i])
                            i++;
                        else if(res[i] < str[i])
                            break;
                    }

                }
            }
        }
        return res;
    }
};
// @lc code=end

