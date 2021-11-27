#include <iostream>
/*24. Să se dubleze valorile egale cu Valoarea minimă dintr-un tablou unidimensional cu n (n&lt;=100)
numere întregi cu cel mult patru cifre citit de la tastatură.*/
using namespace std;

int main()
{
    int n, v[100], minim=99999;
    cout<<"n= ";
    cin>>n;
    cout<<"Scrie elementele vectorului: ";

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        if(v[i]<minim)
        {
            minim=v[i];
        }
    }

    for(int i=0; i<n; i++)
    {
        if(v[i]==minim)
        {
            v[i]=v[i]*2;
        }
    }

    for(int i=0; i<n; i++)
    {
        cout<<v[i]<<", ";
    }

    cout<<"\b  ";

    return 0;
}
