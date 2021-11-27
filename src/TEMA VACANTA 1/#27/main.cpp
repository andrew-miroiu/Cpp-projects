#include <iostream>
#include <cstdio>
/*27. Se citesc elementele unui tablou unidimensional a cu n (n&lt;=100) numere întregi cu cel mult patru
cifre. Să se genereze tabloul b pentru care fiecare componentă memorează numărul de divizori ai

elementului de pe aceeaşi poziţie din tabloul a. Exemplu. Dacă a=(1O, 49, 13, 12) se generează b=(4, 3,
2, 6).*/
using namespace std;

int main()
{
    int a[100], b[100], i, n, nr_div=2;
    cout<<"Scrie numarul de elementele al vectorului: ";
    cin>>n;
    printf("Scrie elementele vectorului: ");

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(i=0; i<n; i++)
    {
        nr_div=2;

        for(int d=2; d<=a[i]/2; d++)
        {

            if(a[i]%d==0)
            {
                nr_div++;
            }
        }
        b[i]=nr_div;
    }

    cout<<"b= ";

    for(i=0; i<n; i++)
    {
        cout<<b[i]<<", ";
    }

    cout<<"\b  ";

    return 0;
}
