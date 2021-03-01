#include<iostream>
#include<stdio.h>
#include<math.h>
#include<vector>



using namespace std;

bool isdivisor(long long num)
{
    long long a = sqrt(num);
    vector<long long>used(num, 0);
    for(long long i = 2; i <= a; i++)
    {
        if(used[i])
            continue;
        else
        {
            if(num % i == 0)
                return false;
            else
            {
                if(i*i < a)
                {
                    for(long long j = i*i; j < a; j += i)
                    {
                        used[j] = 1;
                    }
                }
            }
        }
    }
    return true;
}
int main()
{
    long long a;
    while(cin >> a)
    {
        if(a <2)
        {
            cout << "NO";
        }
        else
        {
            bool flag = isdivisor(a);
            if(flag)
                cout << "YES";
            else
            {
                cout << "NO";
            }
        }
        cout << "\n";
    }
    return 0;
}