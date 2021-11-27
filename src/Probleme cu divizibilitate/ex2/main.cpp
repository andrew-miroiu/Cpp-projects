#include <iostream>

using namespace std;

int main()
{
    int n,d,i,s=0;
    cin>>n;

    for(i=1; i<=n; i++)
    {
        s=0;
        for(d=1; d<=i/2; d++)
        {
            if(i%d==0)
            {
                s=s+d;
            }
        }

        if(s==i)
        {
            cout<<i<<" ,";
        }
    }

    cout<<"\b  ";
    return 0;
}
