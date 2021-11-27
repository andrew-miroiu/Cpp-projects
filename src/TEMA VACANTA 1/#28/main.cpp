#include <iostream>
/*28. Se citesc elementele unui tablou unidimensional a cu n (n&lt;=100) numere întregi cu cel mult patru
cifre. Să se genereze tabloul b pentru care fiecare componentă memorează numãrul de cifre al
elementului de pe aceeaşi poziţie din tabloul a. Exemplu. Dacă a=(345, 61, 8, 900) se genermnî b=(3, 2,
1, 3).*/
using namespace std;

int main()
{
    int a[100], b[100], i, n;
    cout<<"Scrie numarul de elemente al vectorului: ";
    cin>>n;
    cout<<"Scrie elementele vectorului: ";

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(i=0; i<n; i++)
    {
        int counter=0;
        int ca=a[i];
        while(ca)
        {
            ca=ca/10;
            counter++;
        }
        b[i]=counter;
    }

    cout<<"b= ";

    for(i=0; i<n; i++)
    {
        cout<<b[i]<<", ";
    }

    return 0;
}
