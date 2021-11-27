#include <iostream>

using namespace std;

//Prob. 64
int main()
{
    int n, d, s=0, dn;
    cout<<"Numarul n= ";
    cin>>n;
    dn=2*n;
    for (d=1; d*d<=n; d++)
    {
        if (n%d==0)
        {
            s=s+d;

            if (d*d<n)
            {
                s=s+n/d;
            }

        }
    }
    if (dn==s)
    {
        cout<<"Numarul este perfect."<<endl;
    }

    else
    {
        cout<<"Numarul nu este perfect."<<endl;
    }


    return 0;

}
