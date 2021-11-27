#include <iostream>
#include <math.h>
/*19. Fie un tablou cu n numere reale pozitive (1...1OO) ordonate Crescător. Scrieţi un program care
determină numărul minim de intervale închise de forma [x;x+1], cu x număr natural, a căror reuniune

include toate numerele reale din tablou. Exemplu: Dacă tabloul are conţinutul: 2.3, 2.8, 5.1, 5.7, 5.9, 6.3
atunci se afişează 3 (intervalele [2;3], [5;6], [6;7] sunt cele 3 intervale de forma cerută care conţin
numere din tablou).*/
using namespace std;

int main()
{
    int n, i, nr=0;
    double v[100];
    cout<<"n= ";
    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>v[i];
    }

    for(i=0; i<n-1; i=i+2)
    {
        cout<<"["<<floor(v[i])<<";"<<ceil(v[i+1])<<"]";
        nr++;
    }

    cout<<"Nr= "<<nr;

    return 0;
}
