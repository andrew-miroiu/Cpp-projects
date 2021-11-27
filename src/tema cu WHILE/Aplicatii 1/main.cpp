#include <iostream>

using namespace std;

int main()
{
    /*1. Se citeşte de la tastatură un număr natural x de cel mult 9 cifre. Se cere să se calculeze suma
cifrelor impare. Exemplu: dacă x =2345 atunci suma cifrelor impare este s=5+3=8*/
    int x,s=0;
    cout<<"Scrie un nr. de maximum 9 cifre= ";
    cin>>x;

    while(x>0)
    {
        if(x%2!=0)
        {
            s=s+(x%10);
            x=x/10;
        }

        else
        {
            x=x/10;
        }
    }

    cout<<"Suma este "<<s;

    return 0;
}
