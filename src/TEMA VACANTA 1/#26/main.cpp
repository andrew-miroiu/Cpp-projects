#include <iostream>
/*26. Se citesc elementele unui tablou unidimensional a cu n(n&lt;=100) numere întregi cu cel mult patru
cifre. Să se genereze tabloul b pentru care fiecare componentă memorează cea mai mare cifră a
elementului de pe aceeaşi poziţie din tabloul a. Exemplu. Dacă a=(3485, 61, 182, 900) se generează b=(8,
6, 8, 9).*/
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
        int maxim=-99999;
        int ca=a[i];
        while(ca)
        {
            if(ca%10>maxim)
            {
                maxim=ca%10;
            }
            ca=ca/10;
        }

        b[i]=maxim;
    }

    for(i=0; i<n; i++)
    {
        cout<<b[i]<<", ";
    }

    cout<<"\b  ";

    return 0;
}
