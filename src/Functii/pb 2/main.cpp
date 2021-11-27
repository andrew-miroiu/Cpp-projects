#include <iostream>
//10) Subprogramul suma are doi parametri, a și b, prin care primește câte un număr natural din
//intervalul [1,10 4 ]. Subprogramul returnează suma divizorilor naturali comuni lui a și b.
using namespace std;
int suma_div;
int suma(int a, int b)
{
    for(int i=1; i<=a; i++)
    {
        if(a%i==0 && b%i==0)
        {
            suma_div=suma_div+i;
        }
    }

    return suma_div;
}

int main()
{
    int x, y;
    cout<<"x= ";
    cin>>x;
    cout<<"y= ";
    cin>>y;

    cout<<"Suma divizorilor = "<<suma(x, y);

    return 0;
}
