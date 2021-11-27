#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int n,x,E=0;
    cout<<"n= ";
    cin>>n;

    for(x=1; x<=n; x++)
    {
        E=E+pow(-1,x)*(-x)*(x+1);
    }

    cout<<"E= "<<E;

    return 0;
}
