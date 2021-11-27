#include <iostream>

using namespace std;

int main()
{
    int n, p1, p2, p3, cmm=0, c1, c2, c3;
    cin>>n;

    p1=(n-1)*4;
    p2=(n-3)*4;
    p3=(n-5)*4;

    for(int d=p1; d<p1*p1; d++)
    {
        if(d%p1==0 && d%p2==0 && d%p3==0)
        {
            cmm=d;
            break;
        }
    }

    c1=cmm/p1;
    c2=cmm/p2;
    c3=cmm/p3;

    cout <<c1<<" "<<c2<<" "<<c3;

    return 0;
}
