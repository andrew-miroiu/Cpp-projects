#include <iostream>

using namespace std;
//Prob. 389

int main()
{
    int a, b;
    int nrd=0, MIN=0, MAX=0;

    const int nrMin=0, nrMax=1000000000, dif=1000;

    cout<<"a= ";
    cin>>a;
    cout<<"b= ";
    cin>>b;

    if(a<nrMin)
    {
        cout<<"nr a trebuie sa fie mai mare de"<<nrMin;
        return 0;
    }
    if(b>nrMax)
    {
        cout<<"nr b trebuie sa fie mai mic de"<<nrMax;
        return 0;
    }
    if(b-a>dif)
    {
        cout<<"Diferenta dintre b si a trebuie sa fie mai mica de"<<dif;
        return 0;
    }

    if(a>b)
    {
        int aux=0;
        aux=a;
        a=b;
        b=aux;
    }

    for(int n=a; n<=b; n++)
    {
        int divs=0;
        for(int d=1; d<=n; d++)
        {
            if(n%d==0 && d%2==0)
            {
                divs++;
            }
        }
        if(nrd<divs)
        {
            nrd=divs;
        }
    }

    for(int minim=a; minim<=b; minim++)
    {
        int divs=0;
        for(int d=1; d<=minim; d++)
        {
            if(minim%d==0 && d%2==0)
            {
                divs++;
            }
        }
        if(divs == nrd)
        {
            MIN = minim;
            break;
        }
    }

    for(int maxim=b; maxim>=a; maxim--)
    {
        int divs=0;
        for(int d=1; d<=maxim; d++)
        {
            if(maxim%d==0 && d%2==0)
            {
                divs++;
            }
        }
        if(divs == nrd)
        {
            MAX = maxim;
            break;
        }
    }

    cout<<nrd<<" "<<MIN<<" "<<MAX<<"\n";

    cout<<"divizor = "<<nrd<<endl;
    cout<<"minim= "<<MIN<<endl;
    cout<<"maxim= "<<MAX;

    return 0;
}
