#include <iostream>

using namespace std;

int main()
{
    int n, v[100], i, r, k=1; //variabile pt pg. aritmetica
    int m, b[100], j, q, x=1;//variabile pt pg. geometrica
    cout<<"Cate elemente are tabloul unidimensional n? Scrie aici: ";
    cin>>n;
    cout<<"Cate elemente are tabloul unidimensional m? Scrie aici: ";
    cin>>m;
    cout<<"Scrie elementele vectorului v: ";

    for(i=0; i<n; i++)
    {
        cin>>v[i];
    }

    cout<<"Scrie elementele vectorului b: ";

    for(j=0; j<m; j++)
    {
        cin>>b[j];
    }

    r=v[1]-v[0];//ratia p.a
    q=(b[1]*1.)/b[0];//ratia p.g

    for(i=0; i<n-1; i++)
    {
        if(v[i+1]-v[i]!=r)
        {
            k=0;
            break;
        }
    }

    if(k==1)
    {
        cout<<"Avem progresie aritmetica cu ratia"<<r;
    }

    else
    {
        cout<<"NU avem progresie aritmetica";
    }

    for(j=0; j<m-1; j++)
    {
        if(b[j+1]/b[j]!=q)
        {
            x=0;
        }
    }

    cout<<endl;

    if(x==1)
    {
        cout<<"Avem progresie geometrica cu ratia "<<q;
    }

    else
    {
        cout<<"NU progresie geometrica";
    }


    return 0;
}
