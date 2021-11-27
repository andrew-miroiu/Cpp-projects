#include <iostream>

using namespace std;

int main()
{
    //Se citește de la tastatură un sir de numere pana la intalnirea lui 0. Sa se afiseze numai acele
    //numere care au prima cifra si ultima cifra egale!

    int x,cx,p;
    cout<<"x= ";
    cin>>x;

    while(x!=0)
    {
        cx=x;
        p=1;

        while(cx>0)
        {
            p=p*10;
            cx=cx/10;
        }
    }

    cout<<x/(p/10);

    return 0;
}
