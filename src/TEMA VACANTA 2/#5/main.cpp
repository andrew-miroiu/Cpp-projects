#include <iostream>
/*5) Se dă un șir cu n elemente, numere reale. Să se determine câte dintre elemente se află în
afara intervalului închis determinat de primul și ultimul element.*/
using namespace std;

int main()
{
    int n, v[100], i, a, b;//a si b sunt capetii intervalului
    cout<<"Scrie numarul de elemente al vectorului: ";
    cin>>n;
    cout<<"Scrie elementele vectorului: ";

    for(i=0; i<n; i++)
    {
        cin>>v[i];
    }

    if(v[0]<v[n-1])
    {
        a=v[0];
        b=v[n-1];
    }

    else
    {
        a=v[n-1];
        b=v[0];
    }

    cout<<"Elementele care  se afla in afara intervalului inchis determinat de primul si ultimul element sunt: ";
    for(i=1; i<n-1; i++)
    {
        if(v[i]<a || v[i]>b)
        {
            cout<<v[i]<<", ";
        }
    }

    return 0;
}
