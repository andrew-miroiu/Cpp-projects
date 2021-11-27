#include <iostream>

using namespace std;

void fii(int n)
{
    int a;
    for(a=n; a>=1; a--)
    {
        if(n%a==0 && a>n/a)
        {
            cout<<"( "<<a<<" "<<n/a<<" )";
        }
    }
}

int main()
{
    int q;
    cout<<"q= ";
    cin>>q;
    fii(q);
    return 0;
}
