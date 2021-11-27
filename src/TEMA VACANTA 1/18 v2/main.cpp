#include <iostream>
//18. Scrieţi un program care citeşte de la tastatură un număr natural n din intervalul [2,100OO] şi apoi n
//numere întregi şi afişează pe ecran “DA” daca toate numerele impare sunt ordonate Crescător şi cele
//pare sunt ordonate descrescător, altfel se afişează “NU”. Exemplu. pentru n=10, şi v=(1,l0, 5, 8, 7, 9, 9, 6,
//6, 2) se afişează DA.
using namespace std;

int main()
{
    int n, v[100], imp[100], par[100], nr_imp=0, nr_par=0;
    bool isEven=true, isOdd=true;
    cout<<"n= ";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }

    for(int i=0; i<n; i++)
    {
        if(v[i]%2==1)
        {
            imp[i]=v[i];
            nr_imp++;
        }

        if(v[i]%2==0)
        {
            par[i]=v[i];
            nr_par++;
        }
    }

    for(int i=0; i<nr_imp-1; i++)
    {
        if(imp[i]>=imp[i+1])
        {
            isEven=false;
            break;
        }
    }

    for(int i=0; i<nr_par-1; i++)
    {
        if(par[i]<=par[i+1])
        {
            isOdd=false;
            break;
        }
    }

    if(isEven==true && isOdd==true)
    {
        cout<<" DA";
    }
    else
    {
        cout<<"NU ";
    }

    return 0;
}
