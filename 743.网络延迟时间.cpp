/*
 * @lc app=leetcode.cn id=743 lang=cpp
 *
 * [743] 网络延迟时间
 */

// @lc code=start
class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int N, int K) {
        const int INF = 0x3f3f3f3f;
        vector<vector <int>> g(N+1, vector<int>(N+1, INF));

        for(auto &v: times){
            g[v[0]][v[1]] = v[2];
        }

        vector<int> dist(N+1, INF);
        vector<bool> st(N+1, false);

        dist[K] = 0;
        
        for(int i = 0; i < N - 1; i++){
            int t = -1;
            for(int j = 1; j <= N; j++){
                if(!st[j] && (t == -1 || dist[t] > dist[j]))
                    t = j;
            }
            st[t] = true;

            for(int j = 1; j <= N; j++)
                dist[j] = min(dist[j], dist[t] + g[t][j]);
        }

        int ans = *max_element(dist.begin() + 1, dist.end());
        return ans == INF ? -1 : ans;
    }
};
// @lc code=end

