#include <iostream>
//12. Se citesc elementele unui tablou v unidimensional cu (n&lt;=1OO) componente numere întregi din cel
//mult 4 cifre fiecare. Sa se determine pe ce poziţie se va situa primul element din tablou după ordonare
//crescatoare, fără a se ordona tabloul. Exemplu. pentru n=8, şi v:(3, -6, 1, O, 2, 6, -8, 13) se afişează 6.
using namespace std;

int main()
{
    int n, v[100], i, nr=1;
    cout<<"n= ";
    cin>>n;
    cout<<"Scrie elementele vectorului v: ";

    for(i=0; i<n; i++)
    {
        cin>>v[i];
    }

    for(i=1; i<n; i++)
    {
        if(v[0]>v[i])
        {
            nr++;
        }
    }

    cout<<"Primul termen ar trebuie sa fie pe pozitia "<<nr<<" in ordine crescatoare";
    return 0;
}
