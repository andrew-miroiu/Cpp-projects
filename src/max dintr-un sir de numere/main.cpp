#include <iostream>

using namespace std;

int main()
{
    int x, maxx=1;
    cin>>x;
    while(x!=0)
    {
        if(maxx<x)
            maxx=x;
        cin>>x;
    }
    cout<<maxx;
    return 0;
}

