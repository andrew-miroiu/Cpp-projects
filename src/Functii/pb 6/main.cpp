#include <iostream>

using namespace std;
int mutare(int n)
{
    int p, cn, maxn=-10;
    p=1;
    cn=n;
    while (cn>9)
    {
        cn=cn/10;
        p=p*10;
    }
    cn=n;
    do
    {
        n=(n%p)*10+n/p;
        if (n>maxn)
            maxn=n;
    }
    while (cn!=n);
        return maxn;

}

int main()
{
    int x;
    cin>>x;
    cout<<mutare(x);
    return 0;
}
