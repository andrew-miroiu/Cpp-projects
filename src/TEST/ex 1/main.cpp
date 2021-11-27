#include <iostream>
//Sa se afiseze numarul divizorilor unui numar citit de latastatura care au aceeasi paritate ca numarul citit.
using namespace std;

int main()
{
    int n, d, nr=0;
    cout<<"scrie numarul n= ";
    cin>>n;

    for(d=1; d<=n; d++)
    {
        if(n%d==0)
        {
            if(n%2==0)
            {
                if(d%2==0)
                {
                    nr++;
                }
            }

            else
            {
                if(d%2==1)
                {
                    nr++;
                }
            }
        }
    }

    cout<<"Numarul "<<n<<" are "<<nr<<" divizori de aceeasi paritate cu numarul";
    return 0;
}
