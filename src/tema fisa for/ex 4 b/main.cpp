#include <iostream>

using namespace std;

int main()
{
    int x,a,b;
    cout<<"a= ";
    cin>>a;
    cout<<"b= ";
    cin>>b;

    x=a;

    for(x=b; x>=a; x--)
    {
        if(x%5==0)
        {
            cout<<x<<", ";
        }
    }

    return 0;
}
