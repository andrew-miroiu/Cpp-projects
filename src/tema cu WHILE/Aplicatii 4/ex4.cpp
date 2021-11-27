#include <iostream>

using namespace std;

int main()
{

    /* 4. Se citeşte de la tastatură un număr natural x de cel mult 9 cifre. Se cere să se calculeze
    produsul cifrelor impare. Exemplu: dacă x =6543 atunci produsul cifrelor impare este 3*5=15*/
    int x,p=1;

    cout<<"Scrie un nr. de macimum 9 cifre= ";
    cin>>x;

    while(x>0)
    {
        if(x%2!=0)
        {
            p=p*(x%10);
            x=x/10;
        }

        else
        {
            x=x/10;
        }
    }

    cout<<"Produsul cifrelor impare este "<<p;

    return 0;
}
