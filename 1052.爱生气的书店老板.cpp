/*
 * @lc app=leetcode.cn id=1052 lang=cpp
 *
 * [1052] 爱生气的书店老板
 */

// @lc code=start
class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int X) {
        int pos = 0;
        int total = 0;
        int index = 0;
        bool flag = false;

        int max_total = total;
        for(int i = X; i < customers.size(); i++){
            if(flag)
                total -= customers[pos];
            if(grumpy[i])
                total += customers[i];

            pos++;
            if(total > max_total){
                index = pos;
                max_total = total;
            }
        }
        if(total > max_total){
            index = pos;
        }
        while(index < grumpy.size() and grumpy[index] == 0)
            index++;
        max_total = 0;
        for(int i = 0; i < index; i++){
            if(!grumpy[i])
                max_total += customers[i];
        }
        for(int i = index; i < index + X and i < customers.size(); i++){
            max_total += customers[i];
        }
        for(int i = index + X; i < customers.size(); i++){
            if(!grumpy[i])
                max_total += customers[i];
        }
        return max_total;

    }
};
// @lc code=end

