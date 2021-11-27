#include <iostream>

using namespace std;

int main()
{
    int n, k, d, i, v=0;
    cin>>n;
    cin>>k;

    for(i=1; i<=n; i++)
    {
        v=0;
        for(d=2; d<=i/2; d++)
        {
            if(i%d==0)
            {
                v++;
            }
        }

        if(v>=k)
        {
            cout<<i<<" ,";
        }
    }
    return 0;
}
