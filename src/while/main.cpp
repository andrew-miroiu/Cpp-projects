#include <iostream>

using namespace std;

int main()
{
    int x,nr=0;
    cin>>x;
    while(x>0)
    {
        nr++;
        x=x/10;
    }
    cout<<nr;
    return 0;
}
