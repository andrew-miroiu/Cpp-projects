#include <iostream>

using namespace std;

int main()
{
    int x,xc,p=1;
    cin>>x;
    xc=x;

    while(x>9)
    {
        p=p*10;
        x=x/10;
    }

    cout<<(xc%p)/10<<endl;
    return 0;
}
