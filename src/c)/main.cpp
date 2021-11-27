#include <iostream>

using namespace std;

int main()
{
    int n, i, j, k;
    cin>>n;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            for(k=1; k<=n; k++)
            {
                if(i<j && j<k)
                {
                    if(i+j+k==n)
                    {
                        cout<<i<<", "<<j<<", "<<k;
                        cout<<endl;
                    }
                }
            }
        }
    }
    return 0;
}
