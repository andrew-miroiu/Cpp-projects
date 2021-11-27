#include <iostream>
/*2) Fiind dat un numar natural x , sa se afiseze factorul prim care apare la puterea
cea mai mare in descompunerea lui x in factori primi.
Ex. pentru x=540, descompunerea acestuia este : 2^23^35^1, deci factorul prim
ridicat la cea mai mare putere este 3.*/
using namespace std;

int main()
{
    int x, d, putere=0, fp=0, n;
    cin>>x;
    for(d=2; d<=x; d++)
    {
        n=0;
        while(x%d==0)
        {
            n++;
            x=x/d;
        }

        if(n>putere)
        {
            putere=n;
            fp=d;
        }
    }

    cout<<fp;
    return 0;
}
