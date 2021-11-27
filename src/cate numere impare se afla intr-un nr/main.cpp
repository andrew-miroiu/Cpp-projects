#include <iostream>

using namespace std;

int main()
{
    int a,nr;
    nr=0;
    cout<<"Numarul de 3 cifre a= ";
    cin>>a;
    if(a%2==1)
    {
        nr=nr+1;
    }
    a=a/10;
    if(a%2==1)
    {
        nr=nr+1;
    }
    a=a/10;
    if(a%2==1)
    {
        nr=nr+1;
    }
    cout<<"Numarul are "<<nr<<" cifre impare";

    return 0;
}
