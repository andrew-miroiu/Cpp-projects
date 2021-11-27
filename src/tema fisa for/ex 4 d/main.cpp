#include <iostream>

using namespace std;

int main()
{
    int a,b,x,p=1,ogl=0,cx;
    cout<<"a= ";
    cin>>a;
    cout<<"b= ";
    cin>>b;
    x=a;
    cx=x;

    for(x; x<=b; x++)
    {
        cx=x;

        while(cx>0)
        {
            ogl=ogl*10+cx%10;
            cx=cx/10;
        }

        p=p*(ogl%10);
        ogl=0;
    }

    cout<<"Produsul este "<<p;
    return 0;
}
