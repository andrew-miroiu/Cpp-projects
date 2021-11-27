#include <iostream>
//Să se afișeze primele n numere citite de la tastatură, ale vectorului v, știind că vectorul nu are mai mult de 100 de elemente.
using namespace std;

int main()
{
    int n, v[100], i;
    cout<<"n= ";
    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>v[i];
    }

    for(i=0; i<n; i++)
    {
        cout<<v[i]<<endl;
    }

    return 0;
}
