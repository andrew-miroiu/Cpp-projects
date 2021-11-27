#include <iostream>

using namespace std;

int main()
{
    int a,b,sa,sb,d;
    cout<<"a= ";
    cin>>a;
    cout<<"b= ";
    cin>>b;

    for(d=1; d<a; d++)
    {
        if(a%d==0)
        {
            sa=sa+d;
        }
    }

    for(d=1; d<b; d++)
    {
        if(b%d==0)
        {
            sb=sb+d;
        }
    }

    sb=sb-16;

    if(sa==b && sb==a)
    {
        cout<<"PRIETENE";
    }

    else
    {
        cout<<"NU SUNT PRIETENE";
    }

    return 0;
}
