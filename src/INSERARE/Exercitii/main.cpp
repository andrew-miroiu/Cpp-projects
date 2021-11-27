#include <iostream>
#include <fstream>

using namespace std;
ifstream f("numere.in");

int main()
{
    int N, i, j, aux, Vector[100];
    f>>N;

    for(i=0; i<N; i++)
    {
        f>>Vector[i];
    }

    for(i=0; i<N; i++)
    {
        cout<<Vector[i]<<" ";
    }

    for( i = 0; i < N - 1; i++)
    {
        for(j = i + 1; j < N; j++)
        {
            if(Vector[i] > Vector[j])
            {
                aux = Vector[i];
                Vector[i] = Vector[j];
                Vector[j] = aux;
            }
        }
    }

    cout<<endl;

    for(i=0; i<N; i++)
    {
        cout<<Vector[i]<<" ";
    }

    return 0;
}
