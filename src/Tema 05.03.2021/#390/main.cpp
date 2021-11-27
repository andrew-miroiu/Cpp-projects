#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d; // datele de inrare
    int m, n, p, q; // numaratorul si numitorul sumei si produsului
    int cmmdc1=1, cmmdc2=1;
    cout<<"Scrie cele 4 numere: ";
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;

    m=a*d+c*b;
    n=b*d;

    p=a*c;
    q=b*d;

    for(int d=1; d<=min(m,n); d++)
    {
        if(m%d==0 && n%d==0)
        {
            cmmdc1=d;
        }
    }

    for(int d=1; d<=min(p,q); d++)
    {
        if(p%d==0 && q%d==0)
        {
            cmmdc2=d;
        }
    }

    cout<<m/cmmdc1<<" "<<n/cmmdc1<<endl;
    cout<<p/cmmdc2<<" "<<q/cmmdc2;
    return 0;
}
