#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream f("vapoare.in");
    ofstream g("vapoare.out");

    int X, Y; //zilele vapoarelor pentru a face un drum
    int z1, z2; //zilele nevoite pregatirii vapoarelor care pleaca din portul 2
    int v1, v2; // numar total de zile dus-intors
    int cmm; // cel mai mic multiplu comun

    f>>X>>Y;
    f>>z1>>z2;

    v1=(X*7)*2 + z1;
    v2=(Y*7)*2 + z2;

    for(int d=max(v1,v2); d<=v2*v2; d++)
    {
        if(d%v1==0 && d%v2==0)
        {
            cmm=d;
            break;
        }
    }

    g<<cmm;

    f.close();
    g.close();

    return 0;
}
