#include <iostream>
/*20. Scrieţi un program care citeşte de la tastatură două numere întregi a, b cu cel mult patru cifre
fiecare, un număr natural n din intervalul [2,1OO00] şi apoi n numere întregi cu cel mult 4 cifre şi
afişează pe ecran acele numere care au o valoare inclusa în intervalul [a,b].*/
using namespace std;

int main()
{
    int n, v[100], i, a, b;
    cout<<"n= ";
    cin>>n;
    cout<<"Citeste intervalul:";
    cin>>a>>b;

    for(i=0; i<n; i++)
    {
        cin>>v[i];
    }

    cout<<"ELEMENTELE INCLUSE IN INTERVALUL [a;b] SUNT: ";

    for(i=0; i<n; i++)
    {
        if(v[i]>=a && v[i]<=b)
        {
            cout<<v[i]<<", ";
        }
    }

    cout<<"\b  ";

    return 0;
}
