#include <iostream>

using namespace std;

int main()
{
    int n,x,i,d,v=1;
    cin>>n;

    for(i=1; i<=n; i++)
    {
        v=1;
        cout<<"scrie pe x= ";
        cin>>x;
        cout<<"\n";
        for(d=2; d<=x/2; d++)
        {
            if(x%d==0)
            {
                v=0;
            }
        }

        if(v==1)
        {
            cout<<"PRIME"<<"\n";
        }
    }

    return 0;
}
