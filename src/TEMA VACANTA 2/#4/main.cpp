#include <iostream>
/*4) Se citește un vector cu n elemente, numere naturale. Să se determine câte elemente ale
vectorului sunt egale cu diferența dintre cea mai mare și cea mai mică valoare din vector.*/
using namespace std;

int main()
{
    int n, v[100], i, maxim=-9999, minim=9999, x; //x=diferenta dintre max si min
    cout<<"Scrie numarul de elemente al vectorului: ";
    cin>>n;
    cout<<"Scrie elementele vectorului: ";

    for(i=0; i<n; i++)
    {
        cin>>v[i];

        if(v[i]>maxim)
        {
            maxim=v[i];
        }

        if(v[i]<minim)
        {
            minim=v[i];
        }
    }

    x=maxim-minim;

    cout<<"Elementele egale cu diferenta dintre cea mai mare si cea mai mica valoare din vector sunt: ";
    for(i=0; i<n; i++)
    {
        if(v[i]==x)
        {
            cout<<v[i]<<", ";
        }
    }

    return 0;
}
