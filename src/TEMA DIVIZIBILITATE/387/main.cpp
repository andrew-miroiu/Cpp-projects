#include <iostream>

using namespace std;
//Prob. 387
int main()
{
    int x, d, s=0;
    cout<<"Scrie numarul x= ";
    cin>>x;
    for (d=1; d<=x; d++)
    {
        if(x%d==0)
        {
            if(d%2==1)
            {
                s=s+d;
            }
        }
    }
    cout<<"Suma divizorilor lui "<<x<<" este " <<s<<endl;

    return 0;
}
