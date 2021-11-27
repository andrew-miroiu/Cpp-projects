#include <iostream>
/*7) Se dă un vector cu n numere naturale. Să se determine câte dintre perechile de elemente
din vector sunt formate din valori cu aceeași sumă a cifrelor.*/
using namespace std;

int main()
{
    int i, n, v[100], s[100], suma=0, counter=0, cs;
    cout<<"Scrie nr de elem al vectorului: ";
    cin>>n;
    cout<<"Scrie elem. vec.: ";

    for(i=0; i<n; i++)
    {
        suma=0;
        cin>>v[i];
        int cv=v[i];
        while(cv)
        {
            suma=suma+cv%10;
            cv=cv/10;
        }
        s[i]=suma;
    }

    for(i=0; i<n; i++)
    {
        cs=s[i];
        for(int j=i+1; j<n; j++)
        {
            if(cs==s[j])
            {
                counter++;
            }
        }
    }

    cout<<counter;

    return 0;
}
