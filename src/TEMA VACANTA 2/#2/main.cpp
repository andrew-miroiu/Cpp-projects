#include <iostream>
/*Se citește un vector cu n elemente, numere naturale. Să se afișeze elementele din vector
care sunt multipli ai ultimului element.*/
using namespace std;

int main()
{
    int n, v[100], i;
    cout<<"Scrie numarul de elemente al vectorului: ";
    cin>>n;
    cout<<"Scrie elementele vectorului: ";

    for(i=0; i<n; i++)
    {
        cin>>v[i];
    }

    cout<<"Numerele care sunt multipli ai ultimului element sunt: ";
    for(i=0; i<n; i++)
    {
        if(v[i]%v[n-1]==0)
        {
            cout<<v[i]<<", ";
        }
    }

    cout<<"\b  ";
    return 0;
}
