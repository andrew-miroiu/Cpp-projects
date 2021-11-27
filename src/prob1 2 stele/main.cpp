#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,min1,min2;
    cout<<"Scrie numerele: ";
    cin>>a>>b>>c>>d>>e;

     if (a<b)
        min1=a;
        min2=b;
    else
        min1=b;
        min2=a;

    if(c<min1)
        min1=c;
    else if(c>min1 && c<min2)
        min2=c;
    else
        min1=a;
        min2=b;

    if(d<min1)
        min1=d;
    else if(d>min1 && d<min2)
        min2=d;
    else
        min1=a;
        min2=b;

    if(e<min1)
        min1=e;
    else if(e>min1 && e<min2)
        min2=e;
    else
        min1=a;
        min2=b;

    cout<<a+b+c+d+e-min1-min2;

    return 0;
}
