#include <iostream>

using namespace std;

int main()
{
    int a,b,x;
    cout<<"a=";
    cin>>a;
    cout<<"b= ";
    cin>>b;
    cout<<"x= ";
    cin>>x;
    if(x>=a && x<=b)
    {
        cout<< "numarul x apartine intervalului [a,b]";
    }
    else
    {
        cout<< "numarul x nu apartineintervalului [a,b]";
    }

    return 0;
}
