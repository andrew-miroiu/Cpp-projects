#include <iostream>

using namespace std;

int main()
{
    int n, k, d, i, v=0,nrd;
    cin>>n;

    for(i=1; i<=n; i++)
    {
        v=2;
        for(d=2; d<=i/2; d++)
        {
            if(i%d==0)
            {
                v++;
            }
        }

        if(nrd<v)
        {
            nrd=v;
            k=i;
        }
    }

    cout<<"numarul "<<k<<" are "<<nrd<<" divizori";
    return 0;
}
