#include <iostream>

using namespace std;

int main()
{
    int n, i, v[100], x=1;
    cout<<"n= ";
    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>v[i];
    }

    for(i=0; i<n-1; i++)
    {
        if((v[i]%2==0 && v[i+1]%2==0) || (v[i]%2==1 && v[i+1]%2==1))
        {
            x=0;
        }
    }

    if(x==1)
    {
        cout<<"DA!";
    }

    else
    {
        cout<<"NU!";
    }

    return 0;
}
