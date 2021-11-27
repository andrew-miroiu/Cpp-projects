#include <iostream>

using namespace std;

int main()
{
    int a=1, b=1, d, cmd, k=0;
    cin>>a;

    while(a && b)
    {
        cin>>b;

        for(d=1; d<=min(a,b); d++)
        {
            if(a%d==0 && b%d==0)
            {
                cmd=d;
            }
        }

        if(cmd==1 && a!=0 && b!=0)
        {
            k++;
        }

        a=b;
    }

    cout<<"Numarul de nr prime cons = "<<k;

    return 0;
}
