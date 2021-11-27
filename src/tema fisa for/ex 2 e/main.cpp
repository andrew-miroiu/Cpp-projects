#include <iostream>

using namespace std;

int main()
{
    float n,x,E=0,p=1;
    cout<<"n= ";
    cin>>n;

    for(x=1; x<=n; x++)
    {
        p=p*x;
        E=E+1/p;
    }

    cout<<"E= "<<E;
    return 0;
}
