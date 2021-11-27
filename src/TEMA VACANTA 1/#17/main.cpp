#include <iostream>
//17. Scrieţi un program care citeşte de la tastatură un număr natural n din intervalul [2,10O0O] şi apoi n
//numere reale şi afişează pe ecran câte dintre cele n numere reale sunt egale cu media aritmetică a
//celorlalte n-l numere reale.
using namespace std;

int main()
{
    int n, v[100], i, nr=0,s=0, ma;
    cout<<"Scrie numarul n= ";
    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>v[i];
        s=s+v[i];
    }

    for(i=0; i<n; i++)
    {
        ma=(s-v[i])/(n-1);
        if(ma==v[i])
        {
            nr++;
        }
    }

    cout<<"Sunt "<<nr<<" numere";

    return 0;
}
