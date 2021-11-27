#include <iostream>

using namespace std;

int main()
{
    int n, x, cmd, ogl=0, k=0;
    cout<<"Scrie cate numere vrei sa scrii: ";
    cin>>n;
    cout<<"Scrie numarul x= ";

    for(int v=1; v<=n; v++)
    {
        cin>>x;
        int cx=x;
        while(cx>0)
        {
            ogl=ogl*10+cx%10;
            cx=cx/10;
        }

        for(int d=1; d<=min(x,ogl); d++)
        {
            if(x%d==0 && ogl%d==0)
            {
                cmd=d;
            }
        }

        if(cmd==1)
        {
            k++;
        }
    }

    cout<<"Sunt "<<k<<" numere prime";

    return 0;
}
