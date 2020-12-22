/*
 * @lc app=leetcode.cn id=1652 lang=cpp
 *
 * [1652] 拆炸弹
 */

// @lc code=start
class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        int sum;
        vector<int>res;
        if(k > 0){
            for(int i = 0; i < n; i++){
                int count = 0;
                sum = 0;
                while(count < k){
                    if(i+1+count >= n){
                        sum += code[i+1+count-n];
                    }
                    else{
                        sum += code[i+1+count];
                    }
                    count++;
                }
                res.push_back(sum);
            }
        }
        else if(k < 0){
            int tmpk = abs(k);
            for(int i = 0; i < n; i++){
                int count = 0;
                sum = 0;
                while(count < tmpk){
                    if(i-1-count < 0){
                        sum += code[i-1-count+n];
                    }
                    else{
                        sum += code[i-1-count];
                    }
                    count++;
                }
                res.push_back(sum);
            }
        }
        else 
        {
            vector<int> zres(n, 0);
            return zres;
        }
        return res;
    }
};
// @lc code=end

