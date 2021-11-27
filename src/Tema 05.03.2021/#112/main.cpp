#include <iostream>

using namespace std;

int main()
{
    int n, x=1, a, mina=100, maxa=0, cmd;
    cout<<"Cate numere doresti sa scrii?  ";
    cin>>n;

    while(x<=n)
    {
        cin>>a;
        if(a<mina)
        {
            mina=a;
        }

        if(a>maxa)
        {
            maxa=a;
        }
        x++;
    }

    for(int d=1; d<=maxa/2; d++)
    {
        if(mina%d==0 && maxa%d==0)
        {
            cmd=d;
        }
    }

    cout<<mina/cmd<<"/"<<maxa/cmd;
    return 0;
}
