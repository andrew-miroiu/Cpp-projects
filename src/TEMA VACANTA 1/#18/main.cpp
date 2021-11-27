#include <iostream>
//18. Scrieţi un program care citeşte de la tastatură un număr natural n din intervalul [2,100OO] şi apoi n
//numere întregi şi afişează pe ecran “DA” daca toate numerele impare sunt ordonate Crescător şi cele
//pare sunt ordonate descrescător, altfel se afişează “NU”. Exemplu. pentru n=10, şi v=(1,l0, 5, 8, 7, 9, 9, 6,
//6, 2) se afişează DA.
using namespace std;

int main()
{
    int n, v[100], imp[100], par[100], nr_imp=0, nr_par=0, j=0, m=0;
    int isEven=1, isOdd=1;
    cout<<"n= ";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin >> v[i];

        if(v[i]%2==1)
        {
            imp[j]=v[i];
            nr_imp++;
            j++;
        }

        else
        {
            par[m]=v[i];
            nr_par++;
            m++;
        }
    }

    for(int j=0; j<nr_imp-1; j++)
    {
        if(imp[j+1]<imp[j])
        {
            isEven=0;
            break;
        }
    }

    for(int m=0; m<nr_par-1; m++)
    {
        if(par[m]<par[m+1])
        {
            isOdd=0;
            break;
        }
    }

    if(isEven==1 && isOdd==1)
    {
        cout<<" DA";
    }
    else
    {
        cout<<"NU ";
    }

    return 0;
}
