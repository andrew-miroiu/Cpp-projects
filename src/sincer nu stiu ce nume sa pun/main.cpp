#include <iostream>

using namespace std;

int main()
{
    int x;
    cout<<"x= ";
    cin>>x;
    if(x%100==0)
    {
        cout<<x;
    }
    else
    {
        cout<<(x/100+1)*100;
    }
    return 0;
}
