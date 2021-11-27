#include <iostream>
//15.Să se determine dacă un tablou unidimensional de numere întregi are toate elemente egale. Se va
//afişa Da sau Nu.
using namespace std;

int main()
{
    int n, i, v[100], k=1;
    cout<<"Cate elemente se afla in vector? Scrie aici: ";
    cin>>n;
    cout<<"Scrie elementele vectorului v: ";

    for(i=0; i<n; i++)
    {
        cin>>v[i];
    }

    for(i=0; i<n-1; i++)
    {
        if(v[i]!=v[i+1])
        {
            k=0;
            break;
        }
    }

    if(k==1)
    {
        cout<<"Are toate elementele egale";
    }

    else
    {
        cout<<"Nu";
    }
    return 0;
}
