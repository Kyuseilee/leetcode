/*
 * @lc app=leetcode.cn id=1507 lang=cpp
 *
 * [1507] 转变日期格式
 */

// @lc code=start
class Solution {
public:
    string reformatDate(string date) {
        unordered_map<string, string> cmp = 
        {
            {"Jan", "01"},
            {"Feb", "02"},
            {"Mar", "03"},
            {"Apr", "04"},
            {"May", "05"},
            {"Jun", "06"},
            {"Jul", "07"},
            {"Aug", "08"},
            {"Sep", "09"},
            {"Oct", "10"},
            {"Nov", "11"},
            {"Dec", "12"}
        };

        int pos = 0;
        string res = "";
        if(isdigit(date[1]))
        {
            res += date[0];
            res += date[1];
            pos = 5;
        }
        else
        {
            res += "0";
            res += date[0];
            pos = 4;
        }
        res.insert(0,"-");
        string tmp = "";
        for(int count = 0; count < 3; count++)
        {
            tmp += date[pos];
            pos++;
        }
        pos++;
        res.insert(0,cmp[tmp]);
        tmp = "";
        res.insert(0,"-");
        for(int count = 0; count < 4; count++)
        {
            tmp += date[pos];
            pos++;
        }
        cout << tmp << "\n";
        res.insert(0,tmp);
        return res;
    }
};
// @lc code=end

