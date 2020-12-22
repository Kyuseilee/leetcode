/*
 * @lc app=leetcode.cn id=1624 lang=cpp
 *
 * [1624] 两个相同字符之间的最长子字符串
 */

// @lc code=start
class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<char, vector<int>>res;
        for(int i = 0; i < s.size(); i++){
            res[s[i]].push_back(i);
        }
        int max_length = -1;
        for(auto num:res){
            if(num.second.size() == 1)
                continue;
            max_length = max(max_length, num.second[num.second.size()-1] - num.second[0]-1);
        }
        return max_length;

    }
};
// @lc code=end

