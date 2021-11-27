#include <iostream>
/*6) Se dă un vector cu n numere naturale. Să se determine câte dintre perechile de elemente
egal depărtate de capetele vectorului sunt prime între ele.*/
using namespace std;

int main()
{
    int i, v[100], n, verif=1, counter=0;
    cout<<"Scrie numarul de elemente al vectorului: ";
    cin>>n;
    cout<<"Scrie elementele vectorului: ";
    int k=n-1;

    for(i=0; i<n; i++)
    {
        cin>>v[i];
    }

    i=0;

    while(i<n/2)
    {

        for(int d=2; d<=max(v[i],v[k])/2; d++)
        {
            if(v[i]%d==0 && v[k]%d==0)
            {
                verif=0;
                break;
            }
        }

        i++;
        k--;

        if(verif==1)
        {
            counter++;
        }
    }

    printf("Sunt %d perechi prime intre ele", counter);

    return 0;
}
