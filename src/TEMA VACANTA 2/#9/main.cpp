#include <iostream>
/*9) Să se înlocuiască toate elementele nule dintr-un vector cu elemente numere naturale cu
partea întreagă a mediei aritmetice a elementelor nenule din vector.*/
using namespace std;

int main()
{
    int i, n, v[100], s=0, ma, counter=0;
    cout<<"Scrie nr de elem: ";
    cin>>n;
    cout<<"Scrie elem vec: ";

    for(i=0; i<n; i++)
    {
        cin>>v[i];
        if(v[i]!=0)
        {
            s=s+v[i];
            counter++;
        }
    }

    ma=s/counter;

    for(i=0; i<n; i++)
    {
        if(v[i]==0)
        {
            v[i]=ma;
        }
    }

    for(i=0; i<n; i++)
    {
        cout<<v[i]<<", ";
    }

    return 0;
}
