#include <iostream>

using namespace std;
int cmmdc(int a, int b)
{
    int r;
    while (b>0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}

int main()
{
    int m, n, x, y;
    cin>>m>>n>>x>>y;
    cout<<cmmdc(cmmdc(m,n), cmmdc(x,y));
    return 0;
}
