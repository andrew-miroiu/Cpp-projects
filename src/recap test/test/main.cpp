#include <iostream>

using namespace std;

int main()
{
    int a, s, b, v;
    s=0;
    for(int v=1; v<=99; v++)
    {
        a=v%10;
        b=(v/10)%10;
        s=s+a*10+b;
    }

    cout<<"Suma = "<<s;
    return 0;
}
