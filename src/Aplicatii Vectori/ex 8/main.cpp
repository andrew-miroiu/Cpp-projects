#include <iostream>

using namespace std;

int main()
{
    int n, v[100], i, x, k=1;
    cin>>n;

    for(i=0; i<n; i++)
    {
       cin>>v[i];
    }

    for(i=0; i<n-1 && k; i++)
    {
        if((v[i]<0 && v[i+1]<0) || (v[i]>0 && v[i+1]>0))
        {
            k=0;
        }
    }

    if(k==1)
    {
        cout<<"DA";
    }

    else
    {
        cout<<"NU";
    }

    return 0;
}
