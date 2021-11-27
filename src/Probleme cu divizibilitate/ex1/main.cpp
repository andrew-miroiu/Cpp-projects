#include <iostream>

using namespace std;

int main()
{
    int n,d,k,i,s=0;
    cout<<"Scrie n= ";
    cin>>n;

    for(i=2; i<=n; i++)
    {
        k=1;
        for(d=2; d<i; d++)
        {
            if(i%d==0)
            {
                k=0;
            }

        }

        if(k==1)
        {
            cout<<i<<" ,";
            s=s+i;
        }
    }
    cout<<"\b  ";
    cout<<endl;
    cout<<"Suma este = "<<s;
    return 0;
}
