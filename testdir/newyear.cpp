#include<iostream>
#include<stdio.h>

using namespace std;


bool findvalid(long long num)
{
    float a = 0;
    while(a*2021 <= num)
    {
        float resf = (num - 2021*a)/2020;
        int resi = (num - 2021*a)/2020;
        if(resf == resi)
            return true;
        a++;
    }
    return false;
}
int main()
{
    long long a;
    int n;
    cin >> n;
    while(n--)
    {
        cin >> a;
        if(a < 2020)
            cout << "NO";
        else
        {
            if(findvalid(a))
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