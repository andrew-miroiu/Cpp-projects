#include <iostream>
/*21. Se citesc de la tastatură un număr natural nenul n (n&lt;=100) şi apoi cele n numere întregi nenule, de
maximum 4 cifre, reprezentând elementele unui tablou unidimensional v. Scrieţi un program care
afişează câte dintre elementele tabloului pot fi scrise ca sumă a celor două elemente alaturate. În cazul
în care nu existã nici un astfel de element se va afişa valoarea O. Exemplu: Dacă tabloul are conţinutul: 2
7 5 1 4 2 -2 5 se afişează 2.*/
using namespace std;

int main()
{
    int n, v[100], i, nr=0;
    cout<<"n= ";
    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>v[i];
    }

    for(i=1; i<n-1; i++)
    {
        if(v[i-1]+v[i+1]==v[i])
        {
            nr++;
        }
    }

    cout<<"Sunt "<<nr<<" numere cerute.";

    return 0;
}
