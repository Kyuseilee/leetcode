/*
 * @lc app=leetcode.cn id=264 lang=cpp
 *
 * [264] 丑数 II
 */

// @lc code=start
class Solution {
public:
    int nthUglyNumber(int n) {
        priority_queue<double, vector<double>, greater<double>> q;
        set<long>s;
        s.insert(1);
        vector<int>catalog{2, 3, 5};
        double res = 1;
        for(int i = 1; i < n; i++)
        {
            for(auto num : catalog)
            {
                if(s.count(num*res) == 0)
                {
                    q.push(num*res);
                    s.insert(num*res);
                }
            }
            res = q.top();
            q.pop();
        }
        return res;

    }
};
// @lc code=end

