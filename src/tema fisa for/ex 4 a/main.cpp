#include <iostream>

using namespace std;

int main()
{
    int a,b, i;
    cout<<"Scrieti 2 numere naturale a si b (a<=b) : ";
    cin>>a>>b;
    cout<<"("<<a<<";"<<b<<")"<<endl;
    for (i=1; i<=b; i++)
    {
        cout<<"("<<a+i<<";"<<b-i<<")"<<endl;
    }
    return 0;
}
