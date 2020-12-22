/*
 * @lc app=leetcode.cn id=1668 lang=cpp
 *
 * [1668] 最大重复子字符串
 */

// @lc code=start
class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int count = 0;
        int max_count = 0;
        string tmp = word;
        for(int i = 0; i < sequence.size(); i++){
            while(sequence.find(tmp, i) != sequence.npos){
                tmp += word;
                count++;
            }
            tmp = word;
            max_count = max(max_count, count);
            count = 0;
        }
        return max_count;

    }
};
// @lc code=end

