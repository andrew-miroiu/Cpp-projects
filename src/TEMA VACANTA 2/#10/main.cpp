#include <iostream>
/*10) Moş Crăciun s-a dus la Polul Nord Shopping City să cumpere n cadouri pentru copiii din
întreaga lume. Fiecare cadou avea un cod de bare pentru identificarea produsului,
corespunzător unui număr format din nouă cifre, prima cifră fiind nenulă. La plecare şi-a
amintit că-i promisese unui copil isteţ un cadou special, care să fie diferit de toate celelalte.
Moş Crăciun vă roagă să găsiţi un cadou care să aibă codul de bare diferit de toate celelalte.*/
using namespace std;

int main()
{
    int i, n;
    long long v[100], cadou;
    cout<<"Scrie nr de elem: ";
    cin>>n;
    cout<<"Scrie elem vect: ";
    for(i=0; i<n; i++)
    {
        cin>>v[i];
    }

    for(i=0; i<n; i++)
    {
        if(v[i]/100000000==0 || v[i]>999999999 || v[i]<100000000)
        {
            cadou=v[i];
        }
    }

    cout<<"Cadoul promis de Mos Craciun copilului istet are codul de bare: "<<cadou;
    return 0;
}
