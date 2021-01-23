#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int count =2 ;
    int x1, y1,x2,y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    float slope;
    if(x2 == x1)
        slope = 0;
    else
    {
        float slope = (y2-y1)/(x2-x1);
    }
    int posx =(x1+x2)/2;
    int posy = (y1+y2)/2;

    int newx, newy;
    while(n-2)
    {
        cin >>newx >> newy;
        if(newx == posx)
        {
            cout << "War is cruel"<<"\n";
            return 0;
        }
        else if(newx == x1 or newx == x2)
        {
            posx = (newx+posx)/2;
        }
        else if((newy-y1)/(newx-x1) == slope or (newy-y2)/(newx-x1) == slope)
        {
            posx = (posx+newx)/2;
            posy = (posy+newy)/2;
        }
        else
        {
            cout << "War is cruel"<<"\n";
            return 0;
        }
        n--;
    }
    cout << posx << " " <<posy;
    return 0;
}