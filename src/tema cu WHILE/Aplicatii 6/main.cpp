#include <iostream>

using namespace std;

int main()
{
    /* 6. Se citeşte de la tastatură un număr natural x de cel mult 9 cifre. Se cere să se verifice dacă
    numărul de cifre pare este egal cu numărul de cifre impare.Exemplu: dacă x =61432, atunci el are 3 cifre pare(2, 4, 6) şi 2 cifre impare (3, 1), de unde
    rezultă că numărul de cifre pare nu este egal cu numărul de cifre impare.*/

    int x,y,ci,cp;

    cout<<"Scrie un numar de maximum 9 cifre= ";
    cin>>x;

    ci=0;
    cp=0;
    y=x;

    while(x>0)
    {
        if(x%2!=0)
        {
            ci++;
            x=x/10;
        }

        else
        {
            x=x/10;
        }
    }

    while(y>0)
    {
        if(y%2==0)
        {
            cp++;
            y=y/10;
        }

        else
        {
            y=y/10;
        }
    }

    if(ci==cp)
    {
        cout<<"Cifrele pare sunt egale cu cifrele impare";
    }

    else
    {
        cout<<"Cifrele pare nu sunt egale cu cifrele impare";
    }


    return 0;
}
