#include <iostream>
//Se citesc elementele unui tablou unidimensional cu n (n&lt;=100) componente, numere întregi din cel
//mult 4 cifre fiecare. Să se realizeze următoarele prelucrări:
//a. Să se afişeze şi să se numere elementele pare de pe poziţiile impare ale unui vector.
//b. Să se numere elementele pozitive şi pare.
//c. Calculati produsul elementelor negative.
//d. Să se calculeze media aritmetica a elementelor pozitive.
using namespace std;

int main()
{
    int n, v[100], i, nr=0, k=0, p=1;
    float s=0, x=0;
    cout<<"n= ";
    cin>>n;

    cout<<"Scrie elementele vectotrului: ";
    for(i=0; i<n; i++)
    {
        cin>>v[i];

        if(i%2==1 && v[i]%2==0) //a
        {
            cout<<v[i]<<" ,";
            nr++;
        }

        if(v[i]>0 && v[i]%2==0) //b
        {
            k++;
        }

        if(v[i]<0) //c
        {
            p=p*v[i];
        }

        if(v[i]>0) //d
        {
            s=s+v[i];
            x++;
        }
    }
    cout<<"\b  "<<endl;
    cout<<"Sunt "<<nr<<" numere cu i=impar si v[i]=par"<<endl;
    cout<<"Sunt "<<k<<" numere pare si pozitive"<<endl;
    cout<<"Produsul numerelor negative este = "<<p<<endl;
    cout<<"Media aritmetica a numerelor pozitice = "<<s/x<<endl;

    return 0;
}
