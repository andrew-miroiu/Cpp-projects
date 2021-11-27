#include <iostream>
//Se citesc perechi de numere naturale până la citirea a două valori nule. Să se calculeze suma numerelor din perechile pentru care atât valorile inițiale
//cât și oglinditele lor sunt prime între ele.
using namespace std;

int main()
{
    int a=1, b=1, ogla, oglb, d, s=0, cmd1, cmd2;

    while(a && b)
    {
        cin>>a;
        cin>>b;
        int ca=a;
        int cb=b;

        while(ca)
        {
            ogla=ogla*10+ca%10;
            ca=ca/10;
        }

        while(cb)
        {
            oglb=oglb*10+cb%10;
            cb=cb/10;
        }

        for(d=1; d<=min(a,b); d++)
        {
            if(a%d==0 && b%d==0)
            {
                cmd1=d;
            }
        }

        for(d=1; d<=min(ogla,oglb); d++)
        {
            if(ogla%d==0 && oglb%d==0)
            {
                cmd2=d;
            }
        }

        if(cmd1==1 && cmd2==1)
        {
            s=s+a+b;
        }
    }

    cout<<s;

    return 0;
}
