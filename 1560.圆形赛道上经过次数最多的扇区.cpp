/*
 * @lc app=leetcode.cn id=1560 lang=cpp
 *
 * [1560] 圆形赛道上经过次数最多的扇区
 */

// @lc code=start
class Solution {
public:
    vector<int> mostVisited(int n, vector<int>& rounds) {
        unordered_map<int, int>cmp;
        for(int i = 0; i < rounds.size()-1; i++)
        {
            int start = rounds[i];
            while(start != rounds[i+1])
            {
                cmp[start]++;
                start++;
                if(start > n)
                {
                    start = 1;
                }
            }
        }
        cmp[rounds[rounds.size()-1]]++;
        vector<int>res;
        int max_val = 0;
        for(auto item : cmp)
        {
            cout << item.first << " " <<item.second << "\n";
            if(max_val < item.second)
            {
                max_val = item.second;
                res.clear();
                res.push_back(item.first);
            }
            else if(max_val == item.second)
            {
                res.push_back(item.first);
            }
        }
        sort(res.begin(), res.end());
        return res;
    }
};
// @lc code=end

