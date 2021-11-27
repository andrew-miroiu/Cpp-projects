#include <iostream>
/*23. Se citesc elementele unui tablou unidimensional cu n (n&lt;=100) numere întregi cu cel mult patru
cifre. Să se afişeze perechile de elemente alaturate a căror sumă are cea mai mare valoare.*/
using namespace std;

int main()
{
    int n, v[100], maxim=0, a=0, b=0;
    cout<<"n= ";
    cin>>n;
    cout<<"Scrie elementele vectorului: ";

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    for(int i=0; i<n-1; i++)
    {
        int s=v[i]+v[i+1];
        if(s>maxim)
        {
            maxim=s;
            a=v[i];
            b=v[i+1];
        }
    }

    printf("Suma maxima este %d si numerele sumei sunt %d , %d", maxim, a, b);

    return 0;
}
