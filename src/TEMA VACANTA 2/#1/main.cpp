#include <iostream>
#include <cmath>
//Se dă un șir cu n elemente, numere naturale. Determinați diferența în valoare absolută dintre
//numărul de valori pare din șir și numărul de valori impare din șir.
using namespace std;

int main()
{
    int v[100], n, i, sp=0, si=0;
    cout<<"Scrie numarul de elemente al vectorului: ";
    cin>>n;
    cout<<"Scrie elementele vectorului: ";
    for(i=0; i<n; i++)
    {
        cin>>v[i];

        if(v[i]%2==1)
        {
            si=si+v[i];
        }

        else
        {
            sp=sp+v[i];
        }
    }

    int dif=sp-si;
    printf("Diferenta dintre suma numerelor pare si suma numerelor impare in valoare absoluta este %d", abs(dif));

    return 0;
}
