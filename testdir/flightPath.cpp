#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>

#define R 4000
using namespace std;
vector<vector<int>>res;
vector<int>path;

void helper(vector<vector<int>>airport, int s, int t, vector<bool>&used)
{
    if(used[s])
        return;
    if(s == t)
    {
        res.push_back(path);
        return ;
    }
    path.push_back(s);
    for(auto num : airport[s])
    {
        path.push_back(num);
        helper(airport, num, t, used);
        used[num] = true;
        path.pop_back();
    }
    path.pop_back();
}
int main()
{
    int n;
    cin >> n;
    vector<vector<int>>loc;
    int a, b;

    int count = 0;
    while(count < n)
    {
        cin >> a >> b;
        loc.push_back({a, b});
        count++;
    }
    count = 0;
    vector<vector<int>>airport(loc.size());

    while(count < n)
    {
        cin >> b;
        while(b)
        {
            cin >> a;
            airport[count].push_back(a);
            b--;
        }
        count++;
    }
    int s,t;
    cin >> s >> t;

    long double min_val = 111111111111111;
    for(auto num : airport[s])
    {
        vector<bool>used(n+1, false);
        used[s] = true;
        path.push_back(s);
        helper(airport, num, t, used);
        path.pop_back();
    }
    if(res.empty())
        cout << "-1";
    else
    {
        int pos = 0, size = res[0].size();
        vector<vector<int>>visit;
        visit.push_back(res[0]);
        for(int i = 1; i < res.size(); i++)
        {
            if(size > res[i].size())
            {
                visit.clear();
                size = res[i].size();
                visit.push_back(res[i]);
            }
            else
            {
                visit.push_back(res[i]);
            }
        }
        for(auto paths: visit)
        {
            long double tmp = 0;
            for(int i = 0; i < paths.size()-1;i++)
            {
                tmp += R * acos(sin(M_PI*loc[paths[i]][0]/180)*sin(M_PI*loc[paths[i+1]][0]/180) + cos(M_PI*loc[paths[i]][0]/180)*cos(M_PI*loc[paths[i+1]][0]/180)*cos(M_PI*(loc[paths[i]][1]-loc[paths[i+1]][1])/180));
            }
            if(min_val > tmp)
                min_val = tmp;
        }
    }
    printf("%llf", min_val);
    return 0;
}