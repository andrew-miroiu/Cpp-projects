#include <iostream>
#include <fstream>

using namespace std;
ifstream muie("write.in.txt");

int main()
{
    int v[100][100];
    int i, j; // linie si coloana
    int n; //nr linii si coloane
    int s=0; //suma

    cout<<"Scrie nr de linii si coloane: ";
    cin>>n;

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            muie>>v[i][j];
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i<j && i+j>n-1 && i!=n-1 && j!=n-1)
            {
                s=s+v[i][j];
            }
        }
    }

    cout<<" Suma este = "<<s;

    return 0;
}
