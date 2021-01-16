/*
 * @lc app=leetcode.cn id=1598 lang=cpp
 *
 * [1598] 文件夹操作日志搜集器
 */

// @lc code=start
class Solution {
public:
    int minOperations(vector<string>& logs) {
        int count = 0;
        for(auto word : logs)
        {
            if(isalnum(word[0]))
            {
                count++;
            }
            else if(word[1] == '.')
            {
                if(count > 0)
                    count--;
            }
        }
        return count;
    }
};
// @lc code=end

