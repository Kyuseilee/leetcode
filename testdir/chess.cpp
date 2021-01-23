#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int a, b, n, m, k;
    cin >> a >> b >> n >> m>>k;
    vector<vector<int>>res(n, vector<int>(m, 0));
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(i+a < n)
            {
                if(j+b < m)
                    res[i][j]+=1;
                if(j-b >= 0)
                    res[i][j] += 1;

            }
            if(i - a>= 0)
            {
                if(j+b < m)
                    res[i][j]+=1;
                if(j-b >= 0)
                    res[i][j] += 1;
            }
            if(i +b < n)
            {
                if(j+a < m)
                    res[i][j] += 1;
                if(j-a >= 0)
                    res[i][j] += 1;
            }
            if(i-b >= 0)
            {
                if(j+a < m)
                    res[i][j] += 1;
                if(j-a >= 0)
                    res[i][j] += 1;
            }
            if(res[i][j] == k)
                count++;
        }
    }
    cout << count ;
    return 0;
}