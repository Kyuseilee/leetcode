/*
 * @lc app=leetcode.cn id=791 lang=cpp
 *
 * [791] 自定义字符串排序
 */

// @lc code=start
class Solution {
public:
    string customSortString(string S, string T) {
        unordered_map<char, int>path;
        for(int i = 0; i <S.size(); i++){
            path[S[i]] += 1;
        }
        for(int i = 0; i < T.size(); i++){
            while(path[T[i]])
            {
                path[T[i]] -= 1;
                T.replace(i, 1, "");
            }
        }
        string res = "";
        for(int i = 0; i < S.size(); i++)
        {
            if(!path[S[i]])
                res += S[i];
        }
        return res + T;
    }
};
// @lc code=end

