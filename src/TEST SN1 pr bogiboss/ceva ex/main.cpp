#include <iostream>

using namespace std;

int main()
{
    int x, pc, uc, p;
    cout<<"Scrie numarul: ";
    cin>>x;
    pc=x/1000;
    uc=x%1000;
    cout<<pc<<" si "<<uc<<endl;
    p=pc*uc;
    if(p%2==1)
        cout<<p%10;


    return 0;
}
