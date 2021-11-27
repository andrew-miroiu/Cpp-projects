#include <iostream>

using namespace std;

int main()
{
    int i,d,n,maxp,ci,v;
    cout<<"Scrie pana la ce numar sa se caute cel mai mare numar prim: ";
    cin>>n;

    for(i=1; i<n; i++)
    {
        v=1;
        for(d=2; d*d<=i; d++)
        {

            if(i%d==0)
            {
                v=0;
            }
        }

        if(v==1)
            {
               if(i>maxp)
               {
                   maxp=i;
               }
            }

    }

    cout<<endl;
    cout<<"Cel mai mare numar prim pana la n este= "<<maxp;

    return 0;
}
