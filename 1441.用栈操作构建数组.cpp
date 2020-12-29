/*
 * @lc app=leetcode.cn id=1441 lang=cpp
 *
 * [1441] 用栈操作构建数组
 */

// @lc code=start
class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int num = 1;
        vector<string> res;
        for(int i = 0; i < target.size(); i++){
            if(target[i] == num){
                res.push_back("Push");
                num++;
            }
            else{
                while(num < target[i]){
                    res.push_back("Push");
                    res.push_back("Pop");
                    num++;
                }
                res.push_back("Push");
                num++;
            }
        }
        return res;
    }
};

// @lc code=end

