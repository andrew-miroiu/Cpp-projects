#include <iostream>

using namespace std;

int main()
{
    int n, d, x, v=0, k=0;
    cout<<"n= ";
    cin>>n;

    if(n>100)
    {
        cout<<"Pune n un numar mai mic decat 100";
        return 0;
    }

    for(x=1; x<=1000000; x++)
    {
        v=0;
        for(d=1; d<=x; d++)
        {
            if(x%d==0)
            {
                v++;
            }
        }

        if(v%2==1)
        {
            cout<<x<<" ,";
            k++;
        }

        if(k==n)
        {
            break;
        }
    }

    cout<<"\b  ";

    return 0;
}
