#include <iostream>

using namespace std;

int main()
{
    /*5. Se citeşte de la tastatură un număr natural x de cel mult 9 cifre. Se cere să se determine
    cifra maximă. Exemplu: dacă x =6143 atunci cifra minimă este 1*/

    int x,maxim;

    cout<<"Scrie un numar cu maximum 9 cifre= ";
    cin>>x;

    maxim=0;

    while(x>0)
        {
            if(x%10>maxim)
                {
                    maxim=x%10;
                }

            x=x/10;
        }

    cout<<"Cifra maxima este "<<maxim;
    return 0;
}
