#include <iostream>
/*1)Se citeste de la tastatura un numar natural n. Sa se afiseze toate numerele x mai
mici decat n , cu proprietatea ca x-1 si x+1 sunt numere prime.
Ex. un numar este x=42, pentru ca 41 si 43 sunt numere prime.
Pentru n=100, valorile afisate vor fi : 4,6,12,18,30,42,60,72.*/
using namespace std;

int main()
{
    int n,x,d,v1=1,v2=1;
    cout<<"Scrie numarul n=";
    cin>>n;

    for(x=3; x<n; x++)
    {
        v1=1;
        v2=1;
        for(d=2; d<=(x-1)/2; d++)
        {
            if((x-1)%d==0)
            {
                v1=0;
            }
        }

        for(d=2; d<=(x+1)/2; d++)
        {
            if((x+1)%d==0)
            {
                v2=0;
            }
        }

        if(v1==1 && v2==1)
        {
            cout<<x<<" ,";
        }
    }

    cout<<"\b  ";
    return 0;
}
