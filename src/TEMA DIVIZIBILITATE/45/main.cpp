#include <iostream>

using namespace std;
//Prob. 45

int main()
{
    int n,d,x=1;
    cout<<"Scrie numarul n= ";
    cin>>n;

    for(d=2; d<n; d++)
    {
        if(n%d==0)
        {
            x=0;
        }
    }

    if(x==1)
    {
        cout<<"DA";
    }

    else
    {
        cout<<"NU";
    }
    return 0;
}
