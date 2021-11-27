#include <iostream>

using namespace std;

int main()
{
    int a, b, d, cmd=1;
    cout<<"Scrie numerele a si b= "<<endl;
    cin>>a;
    cin>>b;

    for(d=1; d<=min(a,b); d++)
    {
        if(a%d==0 && b%d==0)
        {
            cmd=d;
        }
    }

    if(cmd==1)
    {
        cout<<"PIE";
    }

    else
    {
        cout<<"NOPIE";
    }

    return 0;
}
