#include <iostream>
#include <fstream>
//Să se afișeze primele n numere citite din fișier, ale vectorului v, știind că vectorul nu are mai mult de 100 de elemente. Obs.: pe prima linie a fișierului se citește nr. n,
//iar pe următoarele linie se citește secvența de n nr.

using namespace std;

int main()
{
    ifstream f("fisierdate.in");
    int v[100], i, n;
    f>>n;

    for(i=0; i<n; i++)
    {
        f>>v[i];
    }
    return 0;
}
