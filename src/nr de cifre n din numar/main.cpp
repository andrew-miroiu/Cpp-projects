#include <iostream>

using namespace std;

//12. Se citeşte de la tastatură un număr natural x de cel mult 9 cifre. Se cere să se determine dacă numărul x are toate cifrele egale cu o cifră c, citit de la tastatură.

int main()
{
    int x,k,i;
    cout<<"x= ";
    cin>>x;
    i=0;

    while(x>0)
    {
        cout<<"k= ";
        cin>>k;
        while(x%10==k)
        {
            i++;
        }

        x=x/10;
    }

    cout<<"sunt "<<i<<" cifre de "<<k;

    return 0;
}
