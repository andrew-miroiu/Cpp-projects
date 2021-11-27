#include <iostream>
#include <fstream>

using namespace std;
ifstream f("matricein.txt");

int main()
{
    int v[100][100], i, n, m, j;
    cout<<"Scrie nr de linii: ";
    cin>>n;
    cout<<"Scrie nr. de coloane: ";
    cin>>m;

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            f>>v[i][j];
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Diagonala principala: ";

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(i==j)
            {
                cout<<v[i][j]<<" ";
            }

        }
    }

    cout<<endl;
    cout<<"Triunghiul din zona M: "<<endl;

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(i<j && i+j<n-1)
            {
                cout<<v[i][j]<<" ";
            }

            else
            {
                cout<<"  ";
            }
        }

        cout<<endl;
    }

    cout<<endl;
    cout<<"Tr din zona S: "<<endl;

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(i<j && i+j>n-1)
            {
                cout<<v[i][j]<<" ";
            }

            else
            {
                cout<<"  ";
            }
        }

        cout<<endl;
    }

    cout<<endl;


    n=4;

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            v[i][j]=1;
        }

    }

    for(i=n-2; i>=0; i--)
    {
        for(j=n-2; j>=0; j--)
        {
                v[i][j]=v[i+1][j]+v[i][j+1];
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cout<<v[i][j]<<" ";
        }

        cout<<endl;
    }
    return 0;
}
