#include <iostream>

using namespace std;

void generatoare(int n)
{
    int a, b;
    int exist=0;
    for(a=2; a<=n; a+=2)
    {
        for(b=n; b>0; b--)
        {
            if(a*b + (a/b)==n)
            {
                exist=1;
                cout<<a<<" - "<<b<<endl;
            }
        }
    }

    if(exist==0)
    {
        cout<<"NU EXISTA";
    }

}

int main()
{
    int x;
    cout<<"x= ";
    cin>>x;
    generatoare(x);
    return 0;
}
