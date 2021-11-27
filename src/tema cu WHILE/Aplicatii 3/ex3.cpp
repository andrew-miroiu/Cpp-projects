#include <iostream>

using namespace std;

int main()
{
    /*3. Se citeşte de la tastatură un număr natural x de cel mult 9 cifre. Se cere să se calculeze
produsul cifrelor pare.Exemplu: dacă x =6542 atunci produsul cifrelor pare este 2*4*6=48*/

    int x,p=1;

    cout<<"Scrie un nr. de macimum 9 cifre= ";
    cin>>x;

    while(x>0)
    {
        if(x%2==0)
        {
            p=p*(x%10);
            x=x/10;
        }

        else
        {
            x=x/10;
        }
    }

    cout<<"Produsul este "<<p;

    return 0;
}
