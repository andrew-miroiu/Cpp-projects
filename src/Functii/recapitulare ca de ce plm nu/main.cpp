#include <iostream>
//Sa se afiseze toate numerele din intervalul [1000,99999] care au proprietatea ca atat
//ele cat si rasturnatul lor sunt prime
using namespace std;

int prim(int a)
{
    int nrPrim = 1;
    for(int i = 2; i <= a / 2; i++)
    {
        if(a % i == 0)
        {
            nrPrim = 0;
            break;
        }
    }

    return nrPrim;
}

int oglindit(int b)
{
    int ogl = 0;
    while(b != 0)
    {
        ogl = (ogl*10) + (b%10);
        b = b / 10;
    }

    return ogl;
}

int main()
{
    int n;
    cout<<"Numerele sunt: ";
    for(n = 1000; n <= 99999; n++)
    {
        if(prim(n) == 1 && prim(oglindit(n)) == 1)
        {
            cout<<n<<" ";
        }
    }
    return 0;
}
