#include <iostream>

using namespace std;

int main()
{
    int x, d, p, i, n, prim, j;
    cin>>x;
    for (i=1; i<=x; i++)
    {
        for (d=2; d<=i; d++)
        {
            p=0;
            if(i%d==0)
            {
                p++;
                i=i/d;
            }
            if (p!=0)
            cout<<d<<"^"<<p<<"*";
            cout<<"\b ";
        }
    }
    return 0;
}
