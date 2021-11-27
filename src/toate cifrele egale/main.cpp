#include <iostream>

using namespace std;

int main()
{
    int x;
    cout<<"x = ";
    cin>>x;
    if (x/100==x/10%10 && x/100==x%10)
    {
        cout<<"Cifrele sunt egale.";
    }
    else
    {
        cout<<"Cifrele nu sunt egale.";
    }
    return 0;
}
