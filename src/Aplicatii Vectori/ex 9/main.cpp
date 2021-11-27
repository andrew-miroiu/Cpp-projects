#include <iostream>
//9. Se citesc elementele unui tablou v unidimensional cu n (n&lt;=100) componente, numere întregi din cel
//mult 4 cifre fiecare. Sa se realizeze următoarele prelucrări: a. Să se afişeze valorile prime. b. Să se afişeze
//numerele prime a căror invers este tot un număr prim.
using namespace std;

int main()
{
    int n, v[100], i, prime=0, d, ogl=0, primeogl=0;
    cout<<"n= ";
    cin>>n;
    cout<<"Scrie numerele: ";
    for(i=0; i<n; i++)
    {
        cin>>v[i];
    }

    cout<<"Numerele prime sunt: ";

    for(i=0; i<n; i++)
    {
        for(d=2; d*d<=v[i]; d++)
        {
            prime=0;
            if(v[i]%d==0)
            {
                prime++;
            }
        }

        if(prime==0)
        {
            cout<<v[i]<<" ,";
        }
    }

    cout<<"\b  "<<endl;
    cout<<"Numerele care sunt prime si rasturnatul lor este tot prim sunt:";

    for(i=0; i<n; i++)
    {
        int cv=v[i];

        while(cv)
        {
            ogl=ogl*10+cv%10;
            cv=cv/10;
        }

        for(d=2; d*d<=v[i]; d++)
        {
            prime=0;
            if(v[i]%d==0)
            {
                prime++;
            }
        }

        for(int j=2; j*j<=ogl; j++)
        {
            primeogl=0;
            if(ogl%j==0)
            {
                primeogl++;
            }
        }

        if(prime==0 && primeogl==0)
        {
            cout<<v[i]<<" ,";
        }
    }
    cout<<"\b  ";

    return 0;
}
