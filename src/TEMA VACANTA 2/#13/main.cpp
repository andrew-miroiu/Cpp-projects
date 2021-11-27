#include <iostream>
#include <fstream>
/*13) Fișierul palindromsd.in conține cel mult 1000 de numere naturale, câte un număr pe
fiecare linie. Să se afișeze numerele palindrom din fișier în ordinea primul, ultimul, al doilea,
penultimul etc.*/
using namespace std;

ifstream fin("palindromsd.in");
ofstream fout("palindromsd.out");

int main()
{
    int i, n, v[100],x[100], j=0, nr_j,k=1;
    fin>>n;

    for(i=0; i<n; i++)
    {
        fin>>v[i];
    }

    for(i=0; i<n; i++)
    {
        int cv=v[i];
        int invers=0;
        while(cv)
        {
            invers=invers*10+cv%10;
            cv=cv/10;
        }

        if(invers==v[i])
        {
            x[j]=v[i];
            j++;
            nr_j++;
        }
    }

    for(j=0; j<nr_j/2; j++)
    {
        fout<<x[j]<<endl<<x[nr_j-k]<<endl;
        k++;
    }

    return 0;
}
