/*
 * @lc app=leetcode.cn id=521 lang=cpp
 *
 * [521] 最长特殊序列 Ⅰ
 */

// @lc code=start
class Solution {
public:
    int findLUSlength(string a, string b) {
        if(a == b)
            return -1;
        unordered_map<string, bool>used;
        int max_length = 0;
        string s = "";
        for(int i = 0; i < a.size(); i++){
            s = a[i];
            for(int j = 0; j < a.size(); i++){
                s += a[j];
                if(used[s])
                    break;
                else{
                    if(find(s.begin(), s.end(), b) != b.end())
                    {
                        int size = s.size();
                        max_length = max(max_length, size);
                        used[s] = true;
                    }
                    else{
                        break;
                    }
                }
            }
        }
        for(int i = 0; i < b.size(); i++){
            s = b[i];
            for(int j = 0; j < b.size(); i++){
                s += b[j];
                if(used[s])
                    break;
                else{
                    if(find(s.begin(), s.end(), a) != a.end())
                    {
                        int size = s.size();
                        max_length = max(max_length, size);
                        used[s] = true;
                    }
                    else{
                        break;
                    }
                }
            }
        }
        return max_length;
        

    }
};
// @lc code=end

