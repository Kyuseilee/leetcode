/*
 * @lc app=leetcode.cn id=682 lang=cpp
 *
 * [682] 棒球比赛
 */

// @lc code=start
class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> stk;
        for(int i = 0; i < ops.size(); i++){
            if(ops[i] == "C")
                stk.pop();
            else if(ops[i] == "D")
            {
                int tmp = stk.top();
                stk.push(tmp*2);
            }
            else if(ops[i] == "+"){
                int tmp1 = stk.top();
                stk.pop();
                int tmp2 = stk.top();
                stk.push(tmp1);
                stk.push(tmp1+tmp2);
            }
            else{
                stk.push(stoi(ops[i]));
            }
        }
        int sum = 0;
        while(!stk.empty()){
            sum += stk.top();
            stk.pop();
        }
        return sum;

    }
};
// @lc code=end

