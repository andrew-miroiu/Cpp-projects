#include <iostream>
//13. Se citesc elementele unui tablou v unidimensional cu n (n&lt;=1OO) componente, numere întregi din
//cel mult 4 cifre fiecare. Să se numere câte elemente sunt egale media aritmetica vecinilor săi.
using namespace std;

int main()
{
    int v[100], n, i, nr=0;
    cout<<"n= ";
    cin>>n;
    cout<<"Scrie elementele vectorului v: ";

    for(i=0; i<n; i++)
    {
        cin>>v[i];
    }

    for(i=1; i<n-1; i++)
    {
        if((v[i-1]+v[i+1])/2.==v[i])
        {
            nr++;
        }
    }

    cout<<"Numerele egale cu ma a vecinilor = "<<nr;
    return 0;
}
