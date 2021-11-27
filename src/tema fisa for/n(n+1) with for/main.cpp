#include <iostream>

using namespace std;

int main()
{
    int n,x,E=0;
    cout<<"n= ";
    cin>>n;

    for(x=1; x<=n; x++)
    {
        E=E+x*(x+1);
    }

    cout<<"E= "<<E;
    return 0;
}
