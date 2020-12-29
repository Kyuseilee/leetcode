/*
 * @lc app=leetcode.cn id=824 lang=cpp
 *
 * [824] 山羊拉丁文
 */

// @lc code=start
class Solution {
public:
    string toGoatLatin(string S) {
        string res = "";
        string vowel = "aeiouAEIOU";
        string tmp = "";
        int count = 1;
        for(int i = 0; i < S.size(); i++){
            if(!isalnum(S[i])){
                if(vowel.find(tmp[0]) == vowel.npos){
                    tmp = tmp + tmp[0] + "ma";
                    tmp.erase(tmp.begin());
                    res += tmp;
                }
                else{
                    tmp += "ma";
                    res += tmp;
                }
                int pos = 0;
                while(pos < count){
                    res += 'a';
                    pos++;
                }
                res +=  " ";
                tmp = "";
                count++;
            }
            else{
                tmp += S[i];
            }
        }
        if(!tmp.empty()){
            if(vowel.find(tmp[0]) == vowel.npos){
                tmp = tmp + tmp[0] + "ma";
                tmp.erase(tmp.begin());
                res += tmp;
            }
            else{
                tmp += "ma";
                res += tmp;
            }
            int pos = 0;
            while(pos < count){
                res += 'a';
                pos++;
            }
        }
        return res;
    }
};
// @lc code=end

