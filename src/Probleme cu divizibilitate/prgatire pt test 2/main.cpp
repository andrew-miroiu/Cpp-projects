#include <iostream>
//#445 Un număr natural este pseudoperfect dacă este divizor al sumei divizorilor săi.Să se scrie un program care verifică dacă un număr natural citit de la tastatură este pseudoperfect.
using namespace std;

int main()
{
    int n,d,s=0;
    cout<<"Scrie numarul= ";
    cin>>n;

    for(d=1; d<=n; d++)
    {
        if(n%d==0)
        {
            s=s+d;
        }
    }

    if(s%n==0)
    {
        cout<<"DA";
    }

    else
    {
        cout<<"NU";
    }
    return 0;
}
