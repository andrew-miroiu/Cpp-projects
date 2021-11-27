#include <iostream>

using namespace std;

int main()
{
    int a,b,i,j,prim,k,d,dj,nr=0;
    cout<<"citeste pe a si pe b= ";
    cin>>a;
    cin>>b;

    for(i=a; i<=b; i++)
    {
        prim=0;
        k=0;
        for(d=2; d<=i/2; d++)
        {
            if(i%d==0)
                prim++;
        }
        j=i+2;

        for(dj=2; dj<=j/2; dj++)
        {
            if(j%dj==0)
                k++;
        }
        if(prim==0 && k==0)
        {
            cout<<i<<","<<j<<endl;
            nr++;
        }

    }

    cout<<nr;

    return 0;
}
