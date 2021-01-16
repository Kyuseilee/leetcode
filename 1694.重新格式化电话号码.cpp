/*
 * @lc app=leetcode.cn id=1694 lang=cpp
 *
 * [1694] 重新格式化电话号码
 */

// @lc code=start
class Solution {
public:
    string reformatNumber(string number) {
        string tmp = "";
        for(auto ch : number){
            if(isdigit(ch))
            {
                tmp += ch;
            }
        }
        string res = "";
        int left = tmp.size() % 3;
        if(left < 2)
            left += 3;
        for(int i = 0; i < tmp.size() - left; i++){
            if(i % 3 == 0 and i != 0)
                res += '-';
            res += tmp[i];
        }
        if(left == 3)
        {
            res += '-';
            for(int i = tmp.size() - left; i < tmp.size(); i++)
            {
                res += tmp[i];
            }
        }
        else if(left == 4)
        {
            for(int i = tmp.size() - left; i < tmp.size(); i++)
            {
                if(i > 0 and left % 2 == 0)
                    res += '-';
                res += tmp[i];
                left--;
            }
        }
        else{
            for(int i = tmp.size() - left; i < tmp.size(); i++)
            {
                if(i > 0 and left % 2 == 0)
                    res += '-';
                res += tmp[i];
                left--;
            }
        }
        return res;
    }
};
// @lc code=end

