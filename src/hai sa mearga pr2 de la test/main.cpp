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

    if ((x==m || x==n || x==o) && (y==m || y==n || y==o) && (z==m || z==n || z==o))
    //if ((a%10==b%10 || a%10==b/10%10 || a%10==b/100) && (a/10%10==b%10 || a/10%10==b/10%10 || a/10%10==b/100) && (a/100==b%10 || a/100==b/10%10 || a/100==b/100))
    {
        cout<<"Numerele au cifre egale";
    }

    else
    {
        cout<<"Numerele nu au cifre egale";
    }


    return 0;

}
