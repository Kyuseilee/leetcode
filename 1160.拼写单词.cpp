/*
 * @lc app=leetcode.cn id=1160 lang=cpp
 *
 * [1160] 拼写单词
 */

// @lc code=start
class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char, int>cmp;
        for(auto ch : chars)
        {
            cmp[ch] += 1;
        }
        int length = 0;
        for(auto word : words){
            unordered_map<char, int>tmp;
            bool flag = false;
            for(auto ch : word)
            {
                tmp[ch]++;
                if(!cmp[ch] or cmp[ch] < tmp[ch])
                {
                    flag = true;
                    break;
                }
            }
            if(!flag)
                length += word.size();
        }
        return length;
    }
};
// @lc code=end

