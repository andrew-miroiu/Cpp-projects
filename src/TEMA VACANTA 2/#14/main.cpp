#include <iostream>
#include <cmath>
//Se dau două șiruri de câte n valori notate A și B. Pentru fiecare pereche AiBiAiBi se calculează
//resturile împărțirii la 6669666 a lui AiBiAiBi. Ajutați-l pe Alex să determine suma acestor resturi.
using namespace std;

int main()
{
    int n, a[100], b[100], i, s=0;
    cout<<"Scrie nr de elem: ";
    cin>>n;
    cout<<"Scrie elem vct A: ";

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }

    cout<<"Scrie elem vct B: ";

    for(i=0; i<n; i++)
    {
        cin>>b[i];
    }

    for(i=0; i<n; i++)
    {
        s=s+pow(a[i],b[i]);
    }

    printf("Suma numerelor este %d", s);
    return 0;
}
