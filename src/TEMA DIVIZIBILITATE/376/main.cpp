#include <iostream>

using namespace std;
//Prob. 376
int main()
{
    int x, d, s=0;
    cout<<"x= ";
    cin>>x;
    for (d=1; d*d<=x; d++)
    {
        if (x%d==0)
        {
            s=s+d;
            if(d*d<x)
            {
                s=s+x/d;
            }

        }
    }
    cout<<"Suma divizorilor lui "<<x<<" este " <<s<<endl;

    return 0;
}
