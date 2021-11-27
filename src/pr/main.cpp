#include <iostream>

using namespace std;

int main()
{
    /*Se citeşte un număr natural n cu cel mult 9 cifre. Se cere:
    a) Să se afișeze cifra care apare de cele mai puține ori. Dacă sunt mai multe astfel de cifre, se va afișa una singură (oricare dintre ele).*/

    int n,cn,ck,k,mink=9,i=0;
    cout<<"n= ";
    cin>>n;
    cn=n;
    while(i<=9)
    {
        k=0;
        while(cn!=0)
        {
            if(cn%10==i)
            {
                k++;
            }
            cn=cn/10;
        }
        ck=k;

        if(mink>k && k!=0)
        {
            mink=k;
        }

        i++;
        cn=n;
    }

    cout<<"mink este "<<mink<<endl;

    return 0;
}
