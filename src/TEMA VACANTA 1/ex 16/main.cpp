#include <iostream>
/*16. Se citesc elementele unui tablou unidimensional cu cel mult n componente intregi (n&lt;=100)
ordonate Crescător. Să se afişeze fiecare valoare şi frecvenţa ei în tablou.*/
using namespace std;

int main()
{
    int v[100], n, fr=1, vali;
    cout<<"Scrieti numarul elementele vectorului: ";
    cin>>n;
    cout<<"Scrieti elementele vectorului: ";

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    vali=v[0];

    for(int i=1; i<=n; i++)
    {
        if(v[i]>vali)
        {
            cout<<vali<<" "<<fr<<endl;
            fr=1;
            vali=v[i];
        }

        else
        {
            fr++;
        }
    }
    return 0;
}
