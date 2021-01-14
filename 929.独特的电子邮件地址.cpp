/*
 * @lc app=leetcode.cn id=929 lang=cpp
 *
 * [929] 独特的电子邮件地址
 */

// @lc code=start
class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_map<string, int>cmp;
        for(auto str : emails){
            string s = "";
            int pos = 0;
            bool flag = false;
            while(pos < str.size()){
                if(str[pos] == '@')
                    flag = true;
                if(str[pos] == '.')
                {
                    if(flag)
                        s += str[pos];
                    pos++;
                }
                else if(str[pos] == '+'){
                    while(str[pos] != '@')
                        pos++;
                }
                else{
                    s += str[pos];
                    pos++;
                }
            }
            cout << s << "\n";
            cmp[s] += 1;
        }
        return cmp.size();
    }
};
// @lc code=end

