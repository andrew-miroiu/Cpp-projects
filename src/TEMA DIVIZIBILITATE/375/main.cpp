#include <iostream>

using namespace std;
//Prob. 375

int main()
{
    int i,d,n,v=1;
    cout<<"Scrie numarul n= ";
    cin>>n;

    for(i=n+1; i<n*n; i++)
    {
        v=1;
        for(d=2; d<=i/2; d++)
        {
            if(i%d==0)
            {
                v=0;
            }

        }

        if(v==1)
        {
            cout<<i;
            break;
        }

    }

    return 0;
}

