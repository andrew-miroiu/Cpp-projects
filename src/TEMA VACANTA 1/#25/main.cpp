#include <iostream>
/*25. Se citesc elementele unui tablou unidimensional a cu n (n&lt;=100) numere întregi cu cel mult patru
cifre. Să se genereze tabloul b pentru care fiecare componentă memorează prima cifră a elementului de
pe aceeaşi poziţie din tabloul a. Exemplu. Dacă a=(345, 61, 8, 900) se generează b=(3, 6, 8, 9).*/
using namespace std;

int main()
{
    int a[100], b[100], i, n;
    cout<<"Scrie cate elemente doresti sa contina vectorul: ";
    cin>>n;
    cout<<"Scrie elementele vectorului: ";

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(i=0; i<n; i++)
    {
        int p=1;
        int ca=a[i];
        while(ca>10)
        {
            ca=ca/10;
            p=p*10;
        }

        b[i]=ca;
    }

    cout<<"b= ";

    for(i=0; i<n; i++)
    {
        cout<<", "<<b[i];
    }

    cout<<"\b  ";

    return 0;
}
