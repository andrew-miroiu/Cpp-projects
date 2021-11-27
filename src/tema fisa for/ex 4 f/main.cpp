#include <iostream>

using namespace std;

int main()
{
    int a,b,x,ogl=0,cx;
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

        cout<<ogl<<" ,";
        ogl=0;
    }

    return 0;
}
