#include <iostream>

using namespace std;

int main()
{
    int x,  p=0, cx;
    cin>>x;
    cx=x;
    while (x%2==0)
    {
        if (x%2==0)
        {
            p++;
            x=x/2;
        }
    }
    cout<<"2 la puterea "<<p<<" il divide pe "<<cx;

    return 0;
}
