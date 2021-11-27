#include <iostream>

using namespace std;

int main()
{
    int a, b, d, cmd=0, suprcurte, suprplaca, L, C;
    cin>>a>>b;
    for (d=1; d<=min(a,b); d++)
    {
        if (a%d==0 && b%d==0)
        {
            if (cmd<d)
                cmd=d;
        }
    }
    L=cmd;
    suprcurte=a*b;
    suprplaca=L*L;
    C=suprcurte/suprplaca;

    cout<<"Numarul minim de placi cu care poate fi pavata curtea este "<<C<<endl;
    cout<<"Dimensiunea placilor este "<<L<<endl;
    return 0;
}
