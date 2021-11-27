#include <iostream>

using namespace std;

int main()
{
    int x,identice=1,c;

    cout<<"Scrie x= ";
    cin>>x;

    c=x%10;

    while(x)
    {
        if(x%10!=c)
           identice=0;
           x=x/10;
    }

    if(identice==0)
    {
        cout<<"Numarul nu are ciffrele egale";
    }

    else
    {
        cout<<"Numarul are cifrele egale";
    }

    return 0;
}
