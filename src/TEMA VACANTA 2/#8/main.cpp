#include <iostream>
/*8) Anul acesta unele magazine din România s-au hotărât să organizeze BlackFriday joia, altele
de luni până joi, iar altele sâmbătă şi duminică. Ele au afişat n preţuri înainte de ieftinire şi
cele n preţuri după ieftinire. Aflaţi ce produs s-a ieftinit cu cel mai mare procent.*/
using namespace std;

int main()
{
    int before[100], after[100], i, n, procent_max, position, procent;
    cout<<"Scrie nr de elem: ";
    cin>>n;
    cout<<"Scrie elem. vec. inainte de ieftinire: ";

    for(i=0; i<n; i++)
    {
        cin>>before[i];
    }

    cout<<"Scrie elem. vec. dupa ieftinire: ";

    for(i=0; i<n; i++)
    {
        cin>>after[i];
    }

    for(i=0; i<n; i++)
    {
        procent=(before[i]-after[i])*100/before[i];
        if(procent>procent_max)
        {
            procent_max=procent;
            position=i;
        }
    }

    cout<<"Produsul care s-a ieftinit cel mai mult se afla pe pozitia "<<position;
    return 0;
}
