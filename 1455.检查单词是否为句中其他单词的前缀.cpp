/*
 * @lc app=leetcode.cn id=1455 lang=cpp
 *
 * [1455] 检查单词是否为句中其他单词的前缀
 */

// @lc code=start
class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int count = 1;
        string tmp = "";
        for(int i = 0; i < sentence.size(); i++){
            if(sentence[i] == ' ')
            {
                if(tmp.substr(0, searchWord.size()) == searchWord)
                    return count;
                else
                {
                    count++;
                    tmp = "";
                }
            }
            else{
                tmp += sentence[i];
            }
        }
        if(tmp.substr(0, searchWord.size()) == searchWord)
            return count;
        return -1;

    }
};
// @lc code=end

