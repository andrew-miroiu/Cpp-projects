#include <iostream>

using namespace std;

int main()
{
    int x,a,b,s=0;
    cout<<"a= ";
    cin>>a;
    cout<<"b= ";
    cin>>b;
    x=a;

    for(x; x<=b; x++)
    {
        if(x<=9)
        {
            s=s+x;
        }

        else
        {
            s=s+x%10;
        }
    }

    cout<<"Suma este "<<s;
    return 0;
}
