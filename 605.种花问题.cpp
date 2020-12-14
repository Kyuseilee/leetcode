/*
 * @lc app=leetcode.cn id=605 lang=cpp
 *
 * [605] 种花问题
 */

// @lc code=start
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n == 0)
            return true;
        if(flowerbed.size() == 1)
            return flowerbed[0] == 0;
        for(int i = 0; i < flowerbed.size(); i++){
            if(flowerbed[i] == 1)
                continue;
            if(i > 1 and i < flowerbed.size() - 1){
                if(flowerbed[i-1] == 0 and flowerbed[i+1] == 0)
                {
                    flowerbed[i] = 1;
                    n--;
                }
            }
            else if(i == 0){
                if(flowerbed[i+1] == 0 and flowerbed[i] == 0)
                    n--;
                    flowerbed[0] = 1;
            }
            else if(i == flowerbed.size() -1){
                if(flowerbed[flowerbed.size() - 2] == 0 and flowerbed[flowerbed.size() - 1] == 0)
                    n--;
            }
        }
        return n < 1;

    }
};
// @lc code=end

