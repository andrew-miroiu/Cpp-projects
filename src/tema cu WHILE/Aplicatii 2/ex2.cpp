#include <iostream>

using namespace std;

int main()
{

    /*2. Se citeşte de la tastatură un număr natural x de cel mult 9 cifre. Se cere să se determine câte
cifre impare conţine numărul dat. Exemplu: numărul x =3445 are două cifre impare (3 şi 5)*/
    int x,i;

    cout<<"Scrie un nr. de maximum 9 cifre= ";
    cin>>x;

    i=0;

    while (x>0)
    {
        if(x%2!=0)
        {
            i++;
            x=x/10;
        }

        else
        {
            x=x/10;
        }
    }

    cout<<"Numarul x are "<<i<<" cifre impare";

    return 0;
}
