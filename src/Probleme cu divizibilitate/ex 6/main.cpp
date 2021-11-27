#include <iostream>
//se citeste un numar de la tastatura, afisati 2 la ce putere il divide
using namespace std;

int main()
{
    int n,p=0,x=1;
    cout << "Scrie numarul n= ";
    cin>>n;

    while(n%2==0)
    {
        if(n%2==0)
        {
            p++;
            n=n/2;
        }
    }

    cout<<"Se divide la 2 la puterea "<<p;

    return 0;
}
