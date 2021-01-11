/*
 * @lc app=leetcode.cn id=893 lang=cpp
 *
 * [893] 特殊等价字符串组
 */

// @lc code=start
class Solution {
public:
    int numSpecialEquivGroups(vector<string>& A) {
        unordered_map<string, int> com;
        string s = "";
        string tmp = "";
        for(auto str:A){
            s = "";
            tmp = "";
            if(com[str])
            {
                com[str] += 1;
            }
            else{
                for(int i = 0; i < str.size(); i += 2){
                    tmp += str[i];
                }
                sort(tmp.begin(), tmp.end());
                s += tmp;
                tmp = "";
                for(int i = 1; i < str.size(); i+= 2){
                    tmp += str[i];
                }
                sort(tmp.begin(), tmp.end());
                s += tmp;

                com[s] += 1;
            }
        }
        int count = 0;
        for(auto item : com){
            if(count < item.second){
                count = item.second;
            }
            else if(count == item.second){
                count += item.second;
            }
        }
        return count;

    }
};
// @lc code=end

