#include <iostream>

/*Subprogramul factori are doi parametri, n și m, prin care primește câte un număr natural din
intervalul [1,109]. Subprogramul returnează numărul valorilor prime care apar la aceeași putere
atât în descompunerea în factori primi a lui n, cât și în descompunerea în factori primi a lui m.
Scrieți definiția completă a subprogramului.*/

using namespace std;

int factori(int n, int m)
{
    int putereMax_n = 0, nrPrim_n;
    int putereMax_m = 0, nrPrim_m;
    int counter = 0;
    int i = 2;

    while(n != 1 && m != 1)
    {
        putereMax_m = 0;
        putereMax_n = 0;

        while(n%i == 0)
        {
            nrPrim_n = i;
            putereMax_n++;
            n = n / i;
        }

        while(m%i==0)
        {
            nrPrim_m = i;
            putereMax_m++;
            m = m / i;
        }

        if(nrPrim_n == nrPrim_m && putereMax_m == putereMax_n)
        {
            counter++;
        }

        i++;
    }

    return counter;
}

int main()
{
    int a, b;
    cout<<"scrie a: ";
    cin>>a;
    cout<<"scrie b: ";
    cin>>b;

    cout<<"REZULTAT: "<<factori(a, b);
    return 0;
}
