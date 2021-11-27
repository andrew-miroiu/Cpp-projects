#include <iostream>
/*Se citeste un vector A cu n (n<=1000) elemente numere naturale. Afisati numarul de perechi egal departate de capetele vectorului care au proprietatea ca incep cu aceeasi cifra.
Exemplu: n=6, A={34, 56, 77, 733, 45, 3} => 2, adica perechile (34, 3) si (77, 773)*/
using namespace std;

int main()
{
    int v[1000], i, n, j, counter=0;
    cout<<"Scrie nr de elem al vect.: ";
    cin>>n;
    cout<<"Scrie elem vectorului: ";

    for(i=0; i<n; i++)
    {
        cin>>v[i];
    }

    for(i=0, j=n-1; i<j; i++, j--)
    {
        int cvi=v[i];
        int cvj=v[j];
        while(cvi>9)
        {
            cvi=cvi/10;
        }

        while(cvj>9)
        {
            cvj=cvj/10;
        }

        if(cvi==cvj)
        {
            counter++;
        }
    }

    cout<<"Sunt "<<counter<<" perechi.";
    return 0;
}
