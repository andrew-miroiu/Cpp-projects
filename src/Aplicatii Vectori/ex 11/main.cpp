#include <iostream>
//11. Se citesc elementele unui tablou v unidimensional cu n (n&lt;=1OO) componente numere întregi din cel
//mult 4 cifre fiecare. Să se determine elementul cu numărul de ordine k din tabloul ordonat Crescător,
//fără a se ordona tabloul. Exemplu. pentru n=8, k=4 şi v=(3, -6, 1, O, 2, 6, -8, 13) se afişează 0.
using namespace std;

int main()
{
    int n, v[100], i, nr=1, j, k;
    cout<<"n= ";
    cin>>n;
    cout<<"k= ";
    cin>>k;
    cout<<"Scrie elementele vectorului v: ";

    for(i=0; i<n; i++)
    {
        cin>>v[i];
    }

    for(j=0; j<n; j++)
    {
        nr=1;
        for(i=0; i<n; i++)
        {
            if(v[j]>v[i])
            {
                nr++;

            }
        }
        if(nr==k)
        {
            cout<<v[j]<<endl;
            break;
        }
    }

    return 0;
}
