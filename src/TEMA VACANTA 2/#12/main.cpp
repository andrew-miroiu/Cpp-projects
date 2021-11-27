#include <iostream>
/*12) Se dă un număr natural n şi un tablou unidimensional cu 3*n elemente, numere naturale cu
cel mult 4 cifre. Tabloul este împărţit în trei zone, cu câte n elemente: prima zonă conţine
primele n elemente din tablou, a doua zonă conţine următoarele n elemente din tablou, restul
elementelor fiind în zona a treia. Se cere interschimbarea primulul element par (dacă există)
al zonei unu cu ultimul element impar (dacă există) al zonei trei. În cazul în care unul dintre
elementele care urmează a fi interschimbate nu există, tabloul rămâne nemodificat.*/
using namespace std;

int main()
{
    int n, i, v[100], even, pos_even, odd, pos_odd;
    cout<<"Scrie nr de elem: ";
    cin>>n;
    cout<<"Scrie elem vect.: ";

    for(i=0; i<3*n; i++)
    {
        cin>>v[i];
    }

    for(i=0; i<3*n; i++)
    {
        if(v[i]%2==0)
        {
            even=v[i];
            pos_even=i;
            break;
        }
    }

    for(i=(3*n)-1; i>=0; i--)
    {
        if(v[i]%2==1)
        {
            odd=v[i];
            pos_odd=i;
            break;
        }
    }

    v[pos_even]=odd;
    v[pos_odd]=even;

    for(i=0; i<3*n; i++)
    {
        cout<<v[i]<<", ";
    }

    return 0;
}
