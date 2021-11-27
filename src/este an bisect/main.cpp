#include <iostream>

using namespace std;

int main()
{
    int x;
    cout<< "In ce an suntem? Scrie aici anul: ";
    cin>>x;
    if(x%4==0 && x%100!=0 || x%400==0 )
    {
        cout<< "Anul este bisect";
    }
    else
    {
        cout<< "Anul nu este bisect";
    }
    return 0;
}
