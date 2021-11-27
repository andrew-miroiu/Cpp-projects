#include <iostream>

using namespace std;

int main()
{
    int x;

    cin>>x;

    while(x!=0)
    {
        cin>>x;
        if(x%10%2==0)
            cout<<x<<endl;
    }

    return 0;
}
