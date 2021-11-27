#include <iostream>
//Se citeste x si y si sa se afiseze patratele perfecte din tre aceste numere(x<y)
using namespace std;

int main()
{
    int x, y, i, d;
    cout<<"Scrie x= ";
    cin>>x;
    cout<<"Scrie y= ";
    cin>>y;

    for(i=x; i<=y; i++)
    {
        for(d=1; d<=i; d++)
        {
            if(d*d==i)
            {
                cout<<i<<" ,";
            }
        }
    }

    cout<<"\b  ";
    return 0;
}
