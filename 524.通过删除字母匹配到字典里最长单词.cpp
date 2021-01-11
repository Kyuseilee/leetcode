/*
 * @lc app=leetcode.cn id=524 lang=cpp
 *
 * [524] 通过删除字母匹配到字典里最长单词
 */

// @lc code=start
class Solution {
public:
    string findLongestWord(string s, vector<string>& d) {
        if(s.empty())
            return "";
        string res = "";
        int n = res.size();
        int length = 0;
        for(auto str : d){
            int start = 0;
            int pos = 0;
            bool flag = false;
            while(start < str.size()){
                while(s[pos] != str[start]){
                    pos++;
                    if(pos == s.size())
                    {
                        flag = true;
                        break;
                    }
                }
                if(flag){
                    break;
                }
                start++;
                pos++;
                if(pos == s.size() and start != str.size())
                {
                    flag = true;
                    break;
                }
            }
            if(!flag){
                int size = str.size();
                if(length < size){
                    res = str;
                    length = size;
                }
                else if(length == size and res != str){
                    int pos = 0;
                    while(res[pos] == str[pos]){
                        pos++;
                    }
                    if(res[pos]-str[pos] > 0){
                        res = str;
                    }
                }
            }
        }
        return res;
    }
};
// @lc code=end

