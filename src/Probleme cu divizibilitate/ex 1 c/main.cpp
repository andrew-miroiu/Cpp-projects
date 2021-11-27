/*#include <iostream>

using namespace std;
//Să se afișeze mulțimea divizorilor proprii și numărul ei de elemente

int main()
{
    int x,d,i=0;
    cout<<"x= ";
    cin>>x;
    cout<<"{";

    for(d=2; d<x; d++)
    {
        if(x%d==0)
        {
            cout<<d<<", ";
            i++;
        }
    }

    cout<<"}"<<endl;
    cout<<"Numarul de divizori din multime= "<<i;
    return 0;
}*/

#include<iostream>
using namespace std;
// afsam divizorii si cati sunt
int main()
{
    int x,d,nr;
    cin>>x;
    for(nr=0,d=2;d*d<x;d++)
        if(x%d==0)
         {
             cout<<"(";
            cout<<d<<",";
            nr++;

            if(d*d<x)
            {
                cout<<x/d;
                nr++;
            }

            cout<<")";
         }

    cout<<endl<<x<<" are "<<nr<<" divizori";

}
