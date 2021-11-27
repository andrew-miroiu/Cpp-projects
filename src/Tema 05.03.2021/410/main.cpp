#include <iostream>

using namespace std;

int main()
{
    int n, a, b, cn, v=0, k=1, cmd=0, cv;
    cout<<"Scrie numarul n= ";
    cin>>n;
    cn=n;

    while(cn>0)
    {
        cn=cn/10;
        v++;
    }

    cv=v;

    v=v/2;

    while(v>0)
    {
        k=k*10;
        v--;
    }

    if(cv%2==0)
    {
        a=n/k;
        b=n%k;
    }

    else
    {
        a=n/(k*10);
        b=n%k;
    }

    for(int d=1; d<=min(a,b); d++)
    {
        if(a%d==0 && b%d==0)
        {
            cmd=d;
        }
    }

    cout<<cmd;

    return 0;
}
