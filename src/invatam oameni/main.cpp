#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    int maxi;
    cout<< " Valoarea lui a= ";
    cin>>a;
    cout<< " Valoarea lui b= ";
    cin>>b;
    cout<< " Valoarea lui c= ";
    cin>>c;
    maxi=a;
    if(b>maxi) maxi=b;
    if(c>maxi) maxi=c;
    cout<< "Maximul este "<<maxi;

    return 0;
}
