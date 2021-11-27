#include <iostream>
//1) Se citesc elementele unui tablou unidimensional cu n (n&lt;=100)
//componente, numere întregi din cel mult 4 cifre fiecare. Să se calculeze media aritmetica a
//componentelor tabloului.
using namespace std;

int main()
{
    int n, v[100], i;
    float s=0, k=0 ;
    cout<<"n= ";
    cin>>n;

    for(i=0; i<n; i++)
    {
        cin>>v[i];
        k++;
        s=s+v[i];
    }

    cout<<"Media artmetica= "<<s/k;

    return 0;
}
