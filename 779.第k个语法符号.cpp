/*
 * @lc app=leetcode.cn id=779 lang=cpp
 *
 * [779] 第K个语法符号
 */

// @lc code=start
class Solution {
public:
    int kthGrammar(int N, int K) {
        int start = 2;
        string former = "0";
        string now = "";
        while(start <= N){
            for(auto ch : former){
                if(ch == '0')
                {
                    now += "01";
                }
                else{
                    now += "10";
                }
            }
            former = now;
            now = "";
            start++;
        }
        cout << former<< " ";
        return int(former[K-1]-48);

    }
};
// @lc code=end

