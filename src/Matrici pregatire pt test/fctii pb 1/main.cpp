#include <iostream>

using namespace std;

long n,cn,ogl;
int prime(long n)
{
    if(n==0 || n==1)
    {
        return 0;
    }

    for(int i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }

    return 1;
}
long oglindit(long n)
{
    ogl=0;
    while(n!=0)
    {
        cn=n%10;
        ogl=ogl*10+cn;
        n=n/10;
    }
    return ogl;
}
int main()
{
    for(long int i=1000; i<=99999; i++)
    {
        if(prime(i) && prime(oglindit(i)))
        {
            cout<<i<<endl;
        }
    }

    return 0;
}
