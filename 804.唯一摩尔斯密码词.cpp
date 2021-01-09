/*
 * @lc app=leetcode.cn id=804 lang=cpp
 *
 * [804] 唯一摩尔斯密码词
 */

// @lc code=start
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_map<string,int>com;
        vector<string>source = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        string tmp = "";
        for(auto word:words){
            for(auto ch : word){
                tmp += source[ch-'a'];
            }
            com[tmp] += 1;
            tmp = "";
        }
        return com.size();
    }
};
// @lc code=end

