#include <iostream>

using namespace std;

int main()
{
    int a,b,x,y,z,m,n,o;
    cout<<"Scrieti numarul de 3 cifre a= ";
    cin>>a;
    cout<<"Scrieti numarul de 3 cifre b= ";
    cin>>b;

    x=a%10;
    y=a/10%10;
    z=a/100;

    m=b%10;
    n=b/10%10;
    o=b/100;

    if(x==m && y==n && z==o)
    {
        cout<<"Numerele au toate cele 3 cifre egale";
    }

    else
    {
        cout<<"Numerele nu au toate cele 3 cifre egale";
    }

    return 0;
}
