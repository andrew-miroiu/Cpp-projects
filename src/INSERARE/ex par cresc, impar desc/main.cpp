#include <iostream>

using namespace std;

int main()
{
    int a[100], b[100], par[100], impar[100], n, i, j, k;
    cin>>n;
    j=0;
    k=0;

    for(i=0; i<n; i++)
    {
        cin>>a[i];

        if(a[i]%2==0)
        {
            par[j]=a[i];
            j++;
        }
        else
        {
            impar[k]=a[i];
            k++;
        }
    }

    for(i=0; i<n; i++)
    {
        cin>>b[i];

        if(b[i]%2==0)
        {
            par[j]=b[i];
            j++;
        }
        else
        {
            impar[k]=b[i];
            k++;
        }
    }

    for(i=0; i<j-1; i++)
    {
        for(int x=i+1; x<j; x++)
        {
            if(par[i]>par[x])
            {
                int aux=par[i];
                par[i]=par[x];
                par[x]=aux;
            }
        }
    }

    for(i=0; i<k-1; i++)
    {
        for(int x=i+1; x<k; x++)
        {
            if(impar[i]<impar[x])
            {
                int aux=impar[i];
                impar[i]=impar[x];
                impar[x]=aux;
            }
        }
    }

    int final[100];

    for(i=0; i<j; i++)
    {
            final[i]=par[i];
    }

    int o=0;

    for(i=j; i<j+k; i++)
    {
        final[i]=impar[o];
        o++;
    }

    /*cout<<"vector impar: ";
    for(i=0; i<k; i++)
    {
        cout<<impar[i];
    }


    cout<<"vector par: ";
    for(i=0; i<j; i++)
    {
        cout<<par[i];
    }*/

    cout<<endl<<"vector final: ";

    for(i=0; i<j+k; i++)
    {
        cout<<final[i]<<" ";
    }

    return 0;
}
