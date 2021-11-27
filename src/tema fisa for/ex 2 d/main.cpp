#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;

int main()
{
    float n,x,E=0;
    cout<<"n= ";
    cin>>n;

    for(x=1; x<=n; x++)
    {
        E=E+1/x;
    }

    cout<<"E= "<<E;
    return 0;
}
