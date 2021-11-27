#include <iostream>
#include <cmath>

using namespace std;

int prime(int m, int n)
{
    int i, d, prim=1;
    int counter=0;
    for(i=2; i<min(m, n); i++)
    {
        prim=1;
        for(d=2; d<=i/2; d++)
        {
            if(i%d==0)
            {
                prim=0;
            }
        }

        if(prim==1)
        {
            if(m%i==0 && n%i==0)
            {
                counter++;
            }
        }
    }

    return counter;
}

int main()
{
    int x, y;
    cout<<"x= ";
    cin>>x;
    cout<<"y= ";
    cin>>y;
    cout<<"NR de factori primi comuni = "<<prime(x , y);
    return 0;
}
