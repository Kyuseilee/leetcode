#include<iostream>
#include<stdio.h>
#include<unordered_map>

using namespace std;

int main()
{
    int n ;
    cin >> n;
    long long count = 0;
    unordered_map<long long, int>res;
    long long a = 1;

    while(n)
    {
        a++;
        if(res[a+1])
        {
            res[a+1] = 0;
            res[a] =1;
        }
        else
        {
            res[a] = 1;
            count++;
        }
        n--;
    }

    cout << count;
    return 0;
}