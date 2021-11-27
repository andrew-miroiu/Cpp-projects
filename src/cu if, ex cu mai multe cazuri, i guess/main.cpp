#include <iostream>

using namespace std;

int main()
{
    int a;
    cout<<"numarul a de maxim 2 cifre= ";
    cin>>a;
    if(a<=15)
    {
        cout<<"Patratul numarului= "<<a*a;
    }
    else if(a>=16 && a<=30)
    {
        cout<<"Suma cifrelor este "<<a/10+a%10;
    }
    else
    {
        cout<<"Produsul cifrelor "<<(a/10)*(a%10);
    }
    return 0;
}
