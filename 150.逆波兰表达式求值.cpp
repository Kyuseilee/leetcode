/*
 * @lc app=leetcode.cn id=150 lang=cpp
 *
 * [150] 逆波兰表达式求值
 */

// @lc code=start
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> nums;
        int sum = 0;
        int a, b;
        for(int i = 0; i < tokens.size(); i++){
            if(tokens[i] == "+")
            {
                a = nums.pop();
                b = nums.pop();
                sum += a+b;
                nums.push(sum);
            }
            else if(tokens[i] == "-")
            {
                a = nums.pop();
                b = nums.pop();
                sum += b-a;
                nums.push(sum);
            }
            else if (tokens[i] == "*")
            {
                a = nums.pop();
                b = nums.pop();
                sum += a*b;
                nums.push(sum);
            }
            else if(tokens[i] == "/")
            {
                a = nums.pop();
                b = nums.pop();
                sum += b/a;
                nums.push(sum);
            }
            else{
                nums.push(tokens[i]-"0");
            }
        }
        return sum;

    }
};
// @lc code=end

