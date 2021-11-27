#include <iostream>

using namespace std;
//Afișați cel mai mic număr prim strict mai mare decât n.

int main()
{
    int i,d,n,v,k=0,x;
    cout<<"Scrie de la ce numar sa se caute cel mai mare numar prim: ";
    cin>>n;
    cout<<"Cate numere doresti sa iti afiseze: ";
    cin>>x;

    for(i=n+1; i>n; i++)
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
               k++;
               cout<<i<<" ,";
            }

        if(k>=x)
        {
            break;
        }

    }

    return 0;
}
