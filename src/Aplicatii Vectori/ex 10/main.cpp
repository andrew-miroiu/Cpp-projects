#include <iostream>
//10.Se citesc elementele a doua tablouri unidimensionale a si b cu m respectiv n (m,n&lt;=100)
//componente, numere întregi din cel mult 4 cifre fiecare. Sa se determine câte din elementele tabloului a
//sunt strict mai mici decât toate elementele din b.
using namespace std;

int main()
{
    int a[100], b[100], n, m, i, j, minb=99999, nr=0;
    cout<<"n= ";
    cin>>n;
    cout<<"m= ";
    cin>>m;

    cout<<"Scrie elementele vectorului a: ";
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    cout<<"Scrie elementele vectorului b: ";

    for(j=0; j<m; j++)
    {
        cin>>b[i];
    }

    for(j=0; j<m; j++)
    {
        if(b[i]<minb)
        {
            minb=b[i];
        }
    }

    cout<<"Elementele din a strict mai mici ca toate elementele din b: ";

    for(i=0; i<n; i++)
    {
        if(a[i]<minb)
        {
            cout<<a[i]<<" ,";
            nr++;
        }
    }
    cout<<"\b  "<<endl;
    cout<<"Sunt "<<nr<<" numere mai mici ca b";
    return 0;
}
