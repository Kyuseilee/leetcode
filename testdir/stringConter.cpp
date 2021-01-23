#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;
bool convertString(string a, string b)
{
    if(a.size() < b.size())
    {
        string tmpa = a +'A';
        string tmpa2 = a+'B';
        reverse(tmpa2.begin(), tmpa2.end());
        return convertString(tmpa, b) or convertString(tmpa2, b);
    }
    else
    {
        return a == b;
    }
    

}




int main()
{
    string a;
    string b;
    cin >>a;
    cin >>b;
    bool flag = false;
    flag = convertString(a, b);
    if(flag)
        cout << "Possible";
    else
    {
        cout << "Impossible";
    }
    return 0;
}