#include <iostream>
/*16. Se citesc elementele unui tablou unidimensional cu cel mult n componente intregi (n&lt;=100)
ordonate Crescător. Să se afişeze fiecare valoare şi frecvenţa ei în tablou.*/
using namespace std;

int main()
{
    int v[100], frecvente[100], n, i;
    cout<<"Scrie numarul de elemente al vectorului: ";
    cin>>n;
    cout<<"Scrie elementele vectorului: ";

    for(i=0; i<n; i++)
    {
        cin>>v[i];
        frecvente[v[i]]++;
    }

    for(int j=1; j<100; j++)
    {
        cout<<"Elementul "<<j<<" are frecventa "<<frecvente[v[j]]<<endl;
    }

    return 0;
}
