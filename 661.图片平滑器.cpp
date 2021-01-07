/*
 * @lc app=leetcode.cn id=661 lang=cpp
 *
 * [661] 图片平滑器
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
        int r=M.size(),c=M.back().size();
        vector<vector<int>> res(r,vector<int>(c,-1));
        
        for(int i=0;i<r*c;i++){
            int cur_r=i/c;
            int cur_c=i%c;
            int x1=cur_c,x2=cur_c,y1=cur_r,y2=cur_r,sum=0;
            if(cur_c-1>=0)x1=cur_c-1;//左限
            if(cur_c+1<c)x2=cur_c+1;//右限
            if(cur_r-1>=0)y1=cur_r-1;//上限
            if(cur_r+1<r)y2=cur_r+1;//下限
            for(int i=y1;i<=y2;i++){//遍历求和
                for(int j=x1;j<=x2;j++){
                    sum+=M[i][j];
                }
            }
            int count=(y2-y1+1)*(x2-x1+1);
            res[cur_r][cur_c]=sum/count;
        }
        return res;
    }
};
// @lc code=end

