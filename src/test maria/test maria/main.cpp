#include <iostream>

using namespace std;

int main()
{
    int n, maxim = -1;
    cout<<"Scrie un numar: ";
    cin>>n;
    while(n!=0)
    {
        if(n%10>maxim)
        {
            maxim = n%10;
        }

        n=n/10;
    }

    cout<<"Cea mai mare cifra: "<<maxim;
    return 0;
}
