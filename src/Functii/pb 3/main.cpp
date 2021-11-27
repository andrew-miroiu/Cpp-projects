#include <iostream>
//11)	Scrieți definiția completă a unui subprogram C++ nr_prim care primește prin singurul său parametru, n, un număr natural cu cel mult 9 cifre
//și returnează cel mai mic număr prim, strict mai mare decât n.

using namespace std;

int nr_prim(long n)
{
    bool verif_prime=true;
    int nr;
    for(int i=n+1; i<n*n; i++)
    {
        verif_prime=true;
        for(int d=2; d<=i/2; d++)
        {
            if(i%d==0)
            {
                verif_prime=false;
            }
        }
        if(verif_prime==true)
        {
            nr=i;
            break;
        }
    }

    return nr;

}

int main()
{
    long a;
    cout<<"a= ";
    cin>>a;
    cout<<"Cel mai mic nr prim mai mare ca a este = "<<nr_prim(a);
    return 0;
}
