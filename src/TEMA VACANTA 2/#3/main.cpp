#include <iostream>
/*3.Se citește un vector cu n elemente, numere naturale. Să se afișeze elementele vectorului în
următoarea ordine: primul, ultimul, al doilea, penultimul, etc.*/
using namespace std;

int main()
{
    int n, v[100], i, k=0;
    cout<<"Scrie numarul de elemente al vectorului: ";
    cin>>n;
    cout<<"Scrie elementele vectorului: ";

    for(i=0; i<n; i++)
    {
        cin>>v[i];
    }

    for(i=0; i<n/2; i++)
    {
        cout<<v[0+k]<<", "<<v[(n-1)-k]<<", ";
        k++;
    }

    cout<<"\b ";

    return 0;
}
