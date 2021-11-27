#include <iostream>
#include <cmath>
/*22. Se citesc elementele unui tablou unidimensional cu n (n&lt;=100) numere reale cu cel mult şase
zecimale fiecare, un număr natural x (x&lt;6). Să se determine câte dintre numerele citite au mai mult de x
zecimale.*/
using namespace std;

int main()
{
    int n, x, total = 0;
    float v[100], cv;
    int rotunjit;
    cout<<"x= ";
    cin>>x;
    cout<<"n= ";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

    for(int i=0; i<n; i++)
    {
        cv=v[i];
        rotunjit=floor(v[i]);
        int counter=0;

        while(cv!=rotunjit)
        {
            cv=cv*10;
            rotunjit=cv;
            counter++;
        }

        if(counter > x)
        {
            total++;
        }
    }

    printf("sunt %d numere cu un nr mai mare de zecimale decat x", total);

    return 0;
}
