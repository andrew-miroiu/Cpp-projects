#include <iostream>
/*Subprogramul multiplu are un singur parametru, n, prin care primește un număr natural
(n∈[1,10^4 ]). Subprogramul returnează cel mai mic multiplu nenul al lui n cu proprietatea că este
pătrat perfect.*/
using namespace std;

int multiplu(int n)
{
    int muie = 0;

    for(int i = n + 1; i<= n*n; i++)
    {
        for(int d = 1; d<=i/2; d++)
        {
            if(d * d == i && i % n == 0)
            {
                muie = i;
                break;
            }
        }

        if(muie != 0)
        {
            break;
        }
    }

    return muie;
}

int main()
{
    int x;
    cout<<"SCRIE NUMARUL: ";
    cin>>x;
    cout<<"CMMM: "<<multiplu(x);
    return 0;
}
