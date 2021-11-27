#include <iostream>

using namespace std;

int main()
{
    int n, v[100], i, maxv=-9999, minv=9999;
    cout<<"n= ";
    cin>>n;
    cout<<"Scrie elementele vectorului: ";
    for(i=0; i<n; i++)
    {
        cin>>v[i];
    }

    for(i=0; i<n; i++)
    {
        if(v[i]>maxv)
        {
            maxv=v[i];
        }

        if(v[i]<minv)
        {
            minv=v[i];
        }
    }

    cout<<"Maximul este = "<<maxv<<endl;
    cout<<"Minimul este = "<<minv<<endl;
    return 0;
}
