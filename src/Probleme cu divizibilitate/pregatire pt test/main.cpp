#include <iostream>
//#3351 Se dau n numere naturale. Determinați suma celor prime.
using namespace std;

int main()
{
    int n,c,x,v=1;
    cout<<"Scrie cate numere vrei sa citesti= ";
    cin>>n;

    for(int m=1; m<=n; m++)
    {
        v=1;
        cout<<"Scrie numarul care doresti sa fie verificat= ";
        cin>>x;
        for(int d=2; d<=x/2; d++)
        {
            if(x%d==0)
            {
                v=0;
            }
        }

        if(v==1 && x>2)
        {
            c=c+x;
        }
    }

    cout<<"Suma numerelor prime date de tine la tastatura = "<<c;
    return 0;
}
