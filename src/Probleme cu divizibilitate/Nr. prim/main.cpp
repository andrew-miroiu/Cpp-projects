#include <iostream>

using namespace std;

int main()
/*{
    int x,n,v;
    cin>>x;
    v=0;
     for(n=2; n*n<=x; n++)
     {
         if(x%n==0)
         {
             v++;
         }
     }

     if(v==0)
     {
         cout<<"Numarul este prim";
     }

     else
     {
         cout<<"Numarul NU este prim";
     }

    return 0;
}*/
{
    int n, d, prim=1;
    cin>>n;
    for (d=2; d*d<=n; d++)
    {
        if (n%d==0)
            prim=0;
    }
    cout<<prim;
    return 0;
}
