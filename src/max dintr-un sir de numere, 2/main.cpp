#include <iostream>

using namespace std;

int main()
{
    int x,p=1,maxx,xt;
    cin>>x;
    maxx=x/10;
    while(p<x)
    {
        xt=x/(p*10)*p+x%p;
        p=p*10;

        //if(maxx<xt)
            //maxx=xt;

        cout<<xt<<endl;
    }

    cout<<maxx;

    return 0;
}
