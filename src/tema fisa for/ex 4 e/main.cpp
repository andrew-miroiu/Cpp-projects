#include <iostream>

using namespace std;

int main()
{
    int a,b,x,i=0,cx;
    cout<<"a= ";
    cin>>a;
    cout<<"b= ";
    cin>>b;
    x=a;
    cx=x;
    for(x; x<=b; x++)
    {
        cx=x;
        while(cx!=0)
        {
            if(cx%10==0)
            {
                i=i+1;
                cx=0;
            }

            else
            {
                cx=cx/10;
            }
        }
    }

    cout<<"Sunt "<<i<<" numere care contin cifra 0";

    return 0;
}
